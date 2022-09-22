#include<bits/stdc++.h>
using namespace std;
string kiemtra(string s){
    stack<char>st; char c;
    int n=s.length(),i;
    for(i=0;i<n;i++){
        c=s[i];
        if(c=='(' || c=='{' || c=='[') st.push(c);
        else{
            if(st.empty()) return "NO";
            else if( c==']' &&st.top()=='[') st.pop();
            else if( c=='}' && st.top()=='{') st.pop();
            else if(c==')'&&st.top()=='(') st.pop();
            else return "NO";
        }
    }
    return "YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<kiemtra(s)<<endl;
    }
}