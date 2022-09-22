#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int Min;
    for(int i=0;i<n-1;i++){
        Min=i;
        cout<<"Buoc "<<i+1<<": ";
        for(int j=i+1;j<n;j++){
            if(a[j]<a[Min]) Min=j;
        }
        swap(a[Min],a[i]);
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
            cout<<endl;
    }
}