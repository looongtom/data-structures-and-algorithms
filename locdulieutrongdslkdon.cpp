#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int a[n],b[1000006];
    memset(b,0,sizeof(b));
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]] = 1;
    }
    for(int i=0;i<n;i++){
        if(b[a[i]]){
            cout<<a[i]<<" ";
            b[a[i]]=0;
        }
    }
}