#include<bits/stdc++.h>
using namespace std;
int m=1e9+1;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        unsigned long long s=0; 
        for(int i=0;i<n;i++){
            s = s+( a[i]%m * i%m)%m;
        }
        cout<<s<<endl;
    }
}