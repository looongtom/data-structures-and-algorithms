#include<bits/stdc++.h>
using namespace std;
int n,k=0;
vector<vector<int>>result;
void Print(vector<int>&a,vector<int>&b){
    vector<int>t;
    for(int i=0;i<n;i++){ 
        if(b[i]!=0){
            t.push_back(a[i]);
        }
    
    }
    result.push_back(t);
}
bool cmp(vector<int>a,vector<int>b){
    if(a[0]<b[0]) return true;
    return false;
}
int check(vector<int>&a,vector<int>&b){
    int coun0=0;
    for(int i=0;i<n;i++){
        if(b[i]==0) coun0++;
    }
    if(n-coun0<2) return 0;
    for(int i=0;i<n;i++){
        if(b[i]){
            for(int j=i+1;j<n;j++){
                if(b[j] && a[i]>a[j]) return 0;
            }
        }
    }
    return 1;
}
void create(vector<int>&b){
    b[n-1]++;
    for(int i=n-1;i>0;i--){
        if(b[i]>1){
            b[i-1]++;
            b[i]-=2;
        }
    }
}
vector<int>SAVE(vector<int>&a,vector<int>&b){
    vector<int>r;
    for(int i=0;i<n;i++){
        if(b[i]==1) r.push_back(a[i]);
    }
    return r;
}
int main(){
    int k=0;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<pow(2,n);i++){
        if(check(a,b)) Print(a,b);
        create(b);
    }
    sort(result.begin(),result.end(),cmp);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++) cout<<result[i][j]<<" ";
        cout<<endl;
    }
} 