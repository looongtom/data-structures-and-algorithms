#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int M,i;
        cin>>s;
        int a['z'+1] = {};
        for(int i=0;i<s.size();i++) a[s[i]]++;
        M =*max_element(a+'a',a+'z');
        if(M>s.size()-M+1) cout<<-1<<endl;
        else cout<<1<<endl;
    }
}