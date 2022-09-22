#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,leftMark,rightMark;
        cin>>n;
        vector<int>a(n); vector<int>b(n);
        for(int i=0;i<n;i++){ 
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                cout<<i+1<<" ";
                break;
            }
            else continue;
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]!=b[i]){
                cout<<i+1<<" ";
                break;
            }
            else continue;
        }
        cout<<endl;
    }
}