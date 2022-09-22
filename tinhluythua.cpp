#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int r=1e9+7;
ull Expo( ull a, ull b){
    if(b==0) return 1;
    ull x = Expo(a,b/2);
    if(b%2==0) return (x*x)%r;
    return a*(x*x%r)%r;
}
int main(){
    ull a,b;
    while(a!=0 || b!=0){
    cin>>a>>b;
    if(a==0 && b==0) break;
     cout<<Expo(a,b)<<endl;
    }
}