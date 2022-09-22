#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,coun=0;
        cin>>n;
        set<int>s;
        while(coun<n){
            int tmp;
            cin>>tmp;
            s.insert(tmp);
            coun++;
        }
        if(s.size()==1) cout<<-1<<endl;
        else{
            coun=1;
                for(auto x:s){
                    if(coun>2)break;
                    cout<<x<<" ";
                    coun++;
                }
        }
        cout<<endl;
    }
}