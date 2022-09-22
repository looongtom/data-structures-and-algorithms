#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>s;
int check(vector<int>&a,vector<int>&b,int k){
    for(int i=0;i<k;i++){
        if(a[i]!=b[i]) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>b(n);
        for(int i=0;i<n;i++) cin>>b[i];
        vector<int>a(n);
        for(int i=0;i<n;i++) a[i]=i+1;
        do{
            vector<int>tmp;
            for(int i=0;i<n;i++)  tmp.push_back(a[i]);
            s.push_back(tmp);
        }
        while(next_permutation(a.begin(),a.end()));
        for(int i=0;i<s.size();i++){
            if(check(b,s[i],n)){
                cout<<i+1<<endl;
                break;
            }
        }
        // for(int i=0;i<s.size();i++){
        //     for(int j=0;j<s[i].size();j++) cout<<s[i][j]<<" ";
        //     cout<<endl;
        // }
    }
}