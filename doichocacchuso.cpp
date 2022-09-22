#include<bits/stdc++.h>
using namespace std;
int n;
string s;
void Try(){
    int len=s.size();
    for(int k=0;k<len;k++){
        if(n==0){ 
        break;
        }
        char Max=s[len];
        int index=len;
        for(int j=len;j>k&&n>0;j--){
            if(Max<s[j]){
                Max=s[j];
                index=j;
            }
        }
        if(Max>s[k] && n>0){
            swap(s[k],s[index]);
            n--;
        }
    }
    cout<<s<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>s;
        Try();
    }
}