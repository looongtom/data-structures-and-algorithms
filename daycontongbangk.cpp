#include<bits/stdc++.h>
using namespace std;
void Print(vector<int>&a,vector<int>&b,int n){
    cout<<'[';
    int coun1=0,coun=0;
    for(int i=0;i<n;i++){
        if(b[i]==1) coun1++;
    }
    for(int i=0;i<n;i++){
        if(b[i]!=0){ 
            cout<<a[i];
            coun++;
            if(coun!=coun1) cout<<" ";
        }
        
    }
    cout<<"] ";
}
void create(vector<int>&b,int n){
    b[n-1]--;
    for(int i=n-1;i>0;i--){
        if(b[i]<0){
            b[i-1]--;
            b[i]+=2;
        }
    }
}
int check(vector<int>&a,vector<int>&b,int n,int k){
    int coun=0;
    for(int i=0;i<n;i++){
        if(b[i]==1) coun+=a[i];
    }
    if(coun==k) return 1;
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,CheckCheck=0;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++) b[i]=1;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        for(int i=0;i<pow(2,n);i++){
            if(check(a,b,n,k)){ 
                Print(a,b,n);
                CheckCheck=1;
            }
            create(b,n);
        }
        if(CheckCheck==0) cout<<-1;
        cout<<endl;
    }
}