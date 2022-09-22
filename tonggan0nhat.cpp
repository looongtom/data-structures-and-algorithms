#include<bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,Min=INT_MAX,res;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(abs(a[i]+a[j])<Min){ 
                    Min=abs(a[i]+a[j]);
                    res=(a[i]+a[j]);
                }
            }
        }
        cout<<res<<endl;
    }
}