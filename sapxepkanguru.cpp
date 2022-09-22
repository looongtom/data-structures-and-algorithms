#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int t,l,r,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n,cmp);
        int coun=0;
        l=0,r=n/2;
        // 9 8 7 6     5 4 2 2
        while(l<n/2 && r<n){
            if(a[l] >= 2*a[r]){
                coun++; l++;
                r++;
            }
            else r++;
        }
        cout<<n-coun<<endl;
    }
}