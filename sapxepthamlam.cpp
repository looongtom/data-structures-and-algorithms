#include<bits/stdc++.h>
using namespace std;
/*
    1 6 3 4 5 2 7
    1 2 3 4 5 6 7
*/
string check(vector<int>&a,vector<int>&b,int n){
   int check=1;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i] && a[i]!=b[n-i-1]){
            return "No";
        }
    }
    return "Yes";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n); vector<int>b(n);
        for(int i=0;i<n;i++){ 
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b.begin(),b.end());
        cout<<check(a,b,n)<<endl;
    }
}