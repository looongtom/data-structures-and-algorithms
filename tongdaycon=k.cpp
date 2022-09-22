#include<bits/stdc++.h>
using namespace std;
int n,k;
void create(vector<int>&b){
    b[n-1]++;
    for(int i=n-1;i>0;i--){
        if(b[i]>1){
            b[i-1]++;
            b[i]-=2;
        }
    }
}
void Print(vector<int>&a,vector<int>&b){
    for(int i=0;i<n;i++){
        if(b[i]!=0) cout<<a[i]<<" ";
    }
    cout<<endl;
}
int check(vector<int>&a,vector<int>&b){
    int s=0;
    for(int i=0;i<n;i++){
        if(b[i]==1) s+=a[i];
    }
    if(s==k) return 1;
    return 0;
}
void List(vector<int>&a,vector<int>&b){
    int coun=0;
    for(int i=0;i<pow(2,n);i++){
        if(check(a,b)){ Print(a,b);
            coun++;
        }
        create(b);
    }
    cout<<coun;
}
int main(){
        cin>>n>>k;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++) b[i]=0;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        List(a,b);
}