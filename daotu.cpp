#include<bits/stdc++.h>
using namespace std;
// string Reverse(stack<string>&st,string s){
    
    
// }
int main(){
    int t;
    cin>>t;
        cin.ignore();
    while(t--){
        string s;
        stack<string>st;
        getline(cin,s);
        stringstream sstr(s);
        string word;
        while(sstr >> word) st.push(word);
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
}