#include<bits/stdc++.h>
using namespace std;
int a[1006],n,Minindex=INT_MAX,check=-1;
int Try(int left,int right){
    int pos=n;
    while(left<=right){
        int mid=(left+right)/2;
        if(a[mid] >0){
            pos = mid;
            right=mid-1;
        }
        else left=mid+1;
    }
    return pos;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<Try(0,n)<<endl;
      //cout<<Try(0,n/2)<<endl;
    }
}