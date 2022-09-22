#include<bits/stdc++.h>
using namespace std;
void Print(vector<char>&a,int n){
    for(int i=0;i<n;i++) cout<<a[i];
    cout<<endl;
}
void create(vector<char>&a,int n){
    a[n-1]++;
    for(int i=n-1;i>0;i--){
        if(a[i]>'B'){
            a[i-1]++;
            a[i]-=2;
        }
    }
}
int check(vector<char>&a,int n,int k){
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]=='A'){
            sum++;
            if(sum==k && a[i+1]!='A') return 1;
        }
        else sum=0;
    } 
    return 0;
}
int main(){
    int n,k,coun=0;
    cin>>n>>k;
    vector<char>a(n);
    for(int i=0;i<n;i++) a[i]='A';
    for(int i=0;i<pow(2,n);i++){
        if(check(a,n,k)) coun++;
        create(a,n);
    }
    cout<<coun<<endl;
    for(int i=0;i<n;i++) a[i]='A';
    for(int i=0;i<pow(2,n);i++){
        if(check(a,n,k)) Print(a,n);
        create(a,n);
    }
}