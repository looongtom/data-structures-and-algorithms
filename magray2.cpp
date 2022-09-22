#include<bits/stdc++.h>
using namespace std;
char flip(char c){
  //  return (c == '0') ? '1' : '0';
  if(c=='0') return '1';
  return '0';
}
string GraytoBinary(string s){
    string b="";
    b+=s[0];
    for(int i=1;i<s.size();i++){
        if(s[i]=='0') b+=b[i-1];
        else b+= flip(b[i-1]);
    }
    return b;
}
int main(){
    int  t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<GraytoBinary(s)<<endl;
    }
}