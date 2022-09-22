#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>>b;
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) a[i]=i+1;
        do{
            vector<int>tmp;
            for(int i=0;i<n;i++){
                tmp.push_back(a[i]);
            }
            b.push_back(tmp);
        }
        while(next_permutation(a.begin(),a.end()));
        for(int i=b.size()-1;i>=0;i--){
            for(int j=0;j<b[i].size();j++) cout<<b[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
}