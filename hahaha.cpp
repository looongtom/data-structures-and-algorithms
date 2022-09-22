#include<bits/stdc++.h>
using namespace std;
void Print(vector<char>&a,int n){
    for(int i=0;i<n;i++) cout<<a[i];
    cout<<endl;
}
void create(vector<char>&a,int n){
    a[n-1]+=7;
    for(int i=n-1;i>0;i--){
        if(a[i]>'H'){
            a[i-1]+=7;
            a[i]-=14;
        }
    }
}
int check(vector<char>&a,int n){
    if(a[0]!='H') return 0;
    if(a[1]=='H') return 0;
    if(a[n-1]!='A') return 0;
    int coun=0,check=0;
    for(int i=2;i<n;i++){
        if(check>1) return 0;
        if(a[i]=='H')check++;
        else if(a[i]=='A') check=0;
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char>a(n);
        for(int i=0;i<n;i++) a[i]='A';
        for(int i=0;i<pow(2,n);i++){
            if(check(a,n)) Print(a,n);
            create(a,n);
            // Print(a,n);
            // create(a,n);
        }
    }
}