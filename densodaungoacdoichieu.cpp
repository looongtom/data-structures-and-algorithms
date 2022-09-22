#include<bits/stdc++.h>
using namespace std;
int find(string s){
    stack<char>st;
    int r=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') st.push(s[i]);
        else{
            if(!st.empty()) st.pop();
            else{
                st.push(s[i]);
                r++;
            }
        }
    }
    if(st.size() %2 !=0) return 0;
    r+=st.size()/2;
  return r;
}
int main(){
    int  t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<find(s)<<endl;
    }
}