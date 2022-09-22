#include<bits/stdc++.h>
using namespace std;
int tinh(int n,int s,int m){
    if(s*m > (s-s/7)*n) return -1;
        for(int i=1;i<=s-s/7;i++){
            if(n*i >= s*m){
                return i;
            }
        }
   return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        cout<<tinh(n,s,m)<<endl;
    }
}