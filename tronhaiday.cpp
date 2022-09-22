#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,coun=0;
        cin>>n>>m;
        multiset<int>s;
        while(coun<n+m){
            int tmp;
            cin>>tmp;
            s.insert(tmp);
            coun++;
        }
        for(auto x: s) cout<<x<<" ";
        cout<<endl;
    }
}

