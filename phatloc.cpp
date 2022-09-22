#include<bits/stdc++.h>
using namespace std;
void Print(vector<int>&a,int n){
    for(int i=0;i<n;i++) cout<<a[i];
    cout<<endl;
}
void create(vector<int>&a,int n){
    a[n-1]+=2;
    for(int i=n-1;i>0;i--){
        if(a[i]>8){
            a[i-1]+=2;
            a[i]-=4;
        }
    }
}
int check(vector<int>&a,int n){
    if(a[0]!=8) return 0;
    if(a[n-1]!=6) return 0;
    int count8=0,count6=0,check8=0,check6=0;
    for(int i=0;i<n;i++){
        if(a[i]==8){
            count8++;
            count6=0;
        }
        else{
            count6++;
            count8=0;
        }
        if(count8>1) return 0;
        if(count6>3) return 0;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) a[i]=6;
    for(int i=0;i<pow(2,n);i++){
        if(check(a,n)) Print(a,n);
        create(a,n);
    }
}