#include<bits/stdc++.h>
using namespace std;
#define n 50000
int a[50002];
int LinearSearch(int x){
    int i=0;
    while(i<n && a[i]!=x) i++;
    if(i==n) return 0;
    return 1;
}
int BinarrySearch(int x){
    int left=0,right=n-1,mid;
    do{
        mid =(left+right)/2;
        if(a[mid]==x) return 1;
        else if(a[mid] <x) left=mid+1;
        else right=mid-1;
    }
    while(left<=right);
    return 0;
}
int main(){
    for(int i=0;i<50000;i++) a[i]=i+1;
    //cout<<LinearSearch(40000)<<endl;
    cout<<BinarrySearch(40000)<<endl;
}