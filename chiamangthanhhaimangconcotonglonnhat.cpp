#include<bits/stdc++.h>
using namespace std;
int maxDifference(int arr[], int N, int k){
    int M, S = 0, S1 = 0, max_difference = 0;
    for (int i = 0; i < N; i++) S += arr[i];
    sort(arr, arr + N, greater<int>());
    M = max(k, N - k);
    for (int i = 0; i < M; i++) S1 += arr[i];
    max_difference = S1 - (S - S1);
    return max_difference;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int *a=new int[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<maxDifference(a,n,k)<<endl;
    }
}