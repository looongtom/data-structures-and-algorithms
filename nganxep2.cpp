#include<bits/stdc++.h>
using namespace std;
void Print(stack<int>&st){
    vector<int>q;
    if(st.empty()){
        cout<<"NONE"<<endl;
    }
   /* while(!st.empty()){
        q.push_back( st.top() );
        st.pop();
    }
    reverse(q.begin(),q.end());
    for(int i=0;i<q.size();i++){
        cout<<q[i]<<" ";
        st.push(q[i]);
    }
    cout<<endl;*/
    else cout<<st.top()<<endl;
}
int main(){
    int n,q;
    string s;
    stack<int>st;
    cin>>q;
    while(q--){
        cin>>s;
        if(s=="PUSH"){
            cin>>n;
            st.push(n);
        }
        else if(s=="PRINT") Print(st);
        else{
            if(!st.empty())st.pop();
        }
    }
}