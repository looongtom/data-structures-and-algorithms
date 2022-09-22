#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,coun=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]>1) coun+= a[i+1]-a[i]-1;
        }
        cout<<coun<<endl;
    }
}