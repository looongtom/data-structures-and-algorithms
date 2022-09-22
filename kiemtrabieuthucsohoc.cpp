#include<bits/stdc++.h>
using namespace std;
string Check(string s){
    stack<int>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(i);
        else if(s[i]==')'){
            int j=st.top();
            st.pop();
            if(i-j==2) return "Yes";
            if(s[j+1]=='(' && s[i-1]==')') return "Yes";
        }
    }
    return "No";
}
int main(){
    int t;
    cin>>t;
        cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        cout<<Check(s)<<endl;
    }
}