#include<bits/stdc++.h>
using namespace std;
string findMultiple(int n){
    queue<string>q;
    q.push("9");
    while(1){
        string s;
        s=q.front();
        q.pop();
        if(stoll(s) % n ==0){
            return s;
        }
        q.push(s+"0");
        q.push(s+"9");
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<findMultiple(n)<<endl;
    }
}