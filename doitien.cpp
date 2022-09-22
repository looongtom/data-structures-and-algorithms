#include<bits/stdc++.h>
using namespace std;
int a[]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int money(int n){
    int res=0;
    for(int i=9;i>=0;i--){
        res+=n/a[i];
        n%=a[i];
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<money(n)<<endl;
    }
}