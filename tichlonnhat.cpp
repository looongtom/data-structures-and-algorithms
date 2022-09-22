#include<bits/stdc++.h>
using namespace std;
typedef  long long ull;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    ull x,y,z,t;
    x=a[0]*a[1];
    y=a[0]*a[1]*a[n-1];
    z=a[n-1]*a[n-2]*a[n-3];
    t=a[n-1]*a[n-2];
    cout<< max( max(max (x,y),z),t);
      //  cout<<x<<"\n"<<y<<"\n"<<z<<"\n"<<t<<endl;
     // cout<<z<<endl;
}