#include<bits/stdc++.h>
using namespace std;
string previous(string s){
    int len=s.length();
    if(s.compare("1")==0) return 0;
    int i;
    for( i=len-1;i>=0;i--){
        if(s[i]=='1'){
            s[i]='0';
            break;
        }
        else s[i]='1';
    }
    if(i==0) return s.substr(1,len-1);
    return s;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<previous(s)<<endl;
    }
}