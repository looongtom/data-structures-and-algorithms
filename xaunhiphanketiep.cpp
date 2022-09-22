#include<bits/stdc++.h>
using namespace std;
void check(string s){
    int len=s.size();
        int i,c=-1;
        for(i=len-1;i>0;i--){
            if(s[i]=='0'){
                s[i]='1';
                c=1;
                break;
            }
        }
        if(c==-1){
            for(int j=0;j<len;j++) cout<<0;
            return;
        }
        for(int j=i+1;j<len;j++) s[j]='0';
        if(i!=-1)for(int j=0;j<len;j++) cout<<s[j];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
       check( s);
        cout<<endl;
    }
}