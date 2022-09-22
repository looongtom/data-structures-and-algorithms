#include<bits/stdc++.h>
using namespace std;
int check(vector<int>&a,int n){
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-i-1]) return 0;
    }
    return 1;
}
void Print(vector<int>&a,int n){
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
void create(vector<int>&a,int n){
    a[n-1]++;
    for(int i=n-1;i>0;i--){
        if(a[i]>1){
            a[i-1]++;
            a[i]-=2;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) a[i]=0;
    for(int i=0;i<pow(2,n);i++){
      //  if(check(a,n)) 
        Print(a,n);
        create(a,n);
    }
}