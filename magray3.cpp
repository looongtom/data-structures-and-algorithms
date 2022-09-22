#include<bits/stdc++.h> 
using namespace std;
char check(char a,char b){
    if(a==b) return '0';
    return '1';
}
string Gray2Binary(string s){
    string r="";
    r+=s[0];
    for(int i=1;i<s.size();i++) r+=check(s[i-1],s[i]);
    return r;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<Gray2Binary(s)<<endl;
    }
}