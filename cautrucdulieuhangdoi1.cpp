#include<bits/stdc++.h>
using namespace std;
void Check(deque<int>&q,int s){
    if(s==1){
        cout<<q.size()<<endl;
    }
    else if(s==2){
        if(q.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(s==3){
        int tmp;
        cin>>tmp;
        q.push_back(tmp);
    }
    else if(s==4){
        if(!q.empty()){
            q.pop_front();
        }
    }
    else if(s==5){
        if(!q.empty()) cout<<q.front()<<endl;
        else cout<<-1<<endl;
    }
    else if(s==6){
       if(!q.empty()) cout<<q.back()<<endl;
       else cout<<-1<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        deque<int>q;
        int s,n;
        cin>>n;
        while(n--){
            cin>>s;
            Check(q,s);
        }
    }
}