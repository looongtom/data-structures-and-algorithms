#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    deque<int>dq;
    while(t--){
        string s;
        cin>>s;
        if(s=="PUSHBACK"){
            int tmp;
            cin>>tmp;
            dq.push_back(tmp);
        }
        else if(s=="PUSHFRONT"){
            int tmp;
            cin>>tmp;
            dq.push_front(tmp);
        }
        else if(s=="PUSHBACK"){
            int tmp;
            cin>>tmp;
            dq.push_back(tmp);
        }
        else if(s=="PRINTFRONT"){
            if(!dq.empty()) cout<<dq.front()<<endl;
            else cout<<"NONE\n";
        }
        else if(s=="POPBACK"){
            if(!dq.empty()) dq.pop_back();
        }
        else if(s=="POPFRONT"){
            if(!dq.empty()) dq.pop_front();
        }
        else if(s=="PRINTBACK"){
            if(!dq.empty()) cout<<dq.back()<<endl;
            else cout<<"NONE\n";
        }
    }
}