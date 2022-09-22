#include<bits/stdc++.h>
using namespace std;
int giaithua(int n){
    if(n==0) return 1;
    return n*giaithua(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<giaithua(n);
}