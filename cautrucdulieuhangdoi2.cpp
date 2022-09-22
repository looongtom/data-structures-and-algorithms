#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    int n;
    deque<int>q;
    while(t--){
        cin>>s;
        if(s=="PUSH"){ 
            cin>>n;
             q.push_back(n);
        }
        else if(s=="POP"){
            if(!q.empty()) q.pop_front();
        }
        else {
            if(!q.empty()){ 
                cout<<q.front()<<endl;
            }
            else cout<<"NONE\n";
        }
    }
}