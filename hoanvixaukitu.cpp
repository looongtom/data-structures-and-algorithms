#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len=s.size();
        vector<char>a(len);
        for(int i=0;i<len;i++) a[i]=s[i];
        do{
            for(int i=0;i<len;i++) cout<<a[i];
            cout<<" ";
        }
        while(next_permutation(a.begin(),a.end()));
        cout<<endl;
    }
}