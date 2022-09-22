#include<bits/stdc++.h>
using namespace std;
long long ghep(long long a[],int l,int m,int r){
    int n1=m-l+1, n2=r-m;
    long long L[n1],R[n2],coun=0;
    for(int i=0;i<n1;i++) L[i]=a[i+l];
    for(int i=0;i<n2;i++) R[i]=a[m+i+1];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(L[i]<= R[j]){
            a[k++] = L[i++];
        }
        else{
            a[k++] = R[j++];
            coun = coun + (n1-i);
        }
    }
    while(i<n1) a[k++] = L[i++];
    while(j<n2) a[k++] = R[j++];
    return coun;
}
long long xuly(long long a[],int l,int r){
    long long kq=0;
    if(l<r){
        int m=(l+r)/2;
        kq=kq+xuly(a,l,m);
        kq=kq+xuly(a,m+1,r);
        kq=kq+ghep(a,l,m,r);
    }
   return kq;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<xuly(a,0,n-1)<<endl;
    }
}