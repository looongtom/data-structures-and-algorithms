#include<bits/stdc++.h>
using namespace std;
int n,res;
bool h[11],c[11],cheoxuoi[22],cheonguoc[22];
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!h[i] && !c[j] && !cheoxuoi[i+j-1] &&!cheonguoc[i-j+n]){
            h[i]=c[j]=cheoxuoi[i+j-1]=cheonguoc[i-j+n] = true;
            if(i==n) res++;
            else Try(i+1);
            h[i]=c[j]=cheoxuoi[i+j-1]=cheonguoc[i-j+n] = false;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
    cin>>n;
    Try(1);
    cout<<res<<endl;
    res=0;
    }
}

