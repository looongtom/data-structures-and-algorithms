#include<bits/stdc++.h>
using namespace std;
bool cus(int a,int b){
    if(b<a) return 1;
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,coun=0;
        cin>>n;
        k=n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end(),cus);
        for(int i=0;i<=n/2;i++){ 
            cout<<a[i]<<" ";
            coun++;
            if(coun==n) break;
            cout<<a[i+k-1]<<" ";
            coun++;
            if(coun==n) break;
            k-=2;
        }
        cout<<endl;
    }
}
// k=7
// 0 1 2 3 4 5 6
// 7 6 5 4 3 2 1
