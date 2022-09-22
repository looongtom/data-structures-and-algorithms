#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,coun=0;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) if(a[i]==x) coun++;
        coun!=0?cout<<coun<<endl:cout<<-1<<endl;;
    }
}