#include<bits/stdc++.h>
using namespace std;
void Print(stack<int>&st){
    vector<int>q;
    if(st.empty()){
        cout<<"empty"<<endl;
        return;
    }
    while(!st.empty()){
        q.push_back( st.top() );
        st.pop();
    }
    reverse(q.begin(),q.end());
    for(int i=0;i<q.size();i++){
        cout<<q[i]<<" ";
        st.push(q[i]);
    }
    cout<<endl;
}
int main(){
    int n;
    string s;
    stack<int>st;
    while(cin>>s){
        if(s[1]=='u'){
            cin>>n;
            st.push(n);
        }
        else if(s[1]=='h') Print(st);
        else{
            st.pop();
        }
    }
}