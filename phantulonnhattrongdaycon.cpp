#include<bits/stdc++.h>
using namespace std;
/*
    0 1 2 3 4 5 6 7 8
    1 2 3 1 4 5 2 3 6
*/
void List(vector<int>&a,int n,int k){
    deque<int>Qi(k);
    int i;
    for(i=0;i<k;i++){
        while( !Qi.empty() && a[i]>=a[ Qi.back()]) Qi.pop_back();
        Qi.push_back(i);
    }
    for(;i<n;i++){
        cout<<a[Qi.front()] <<" ";
        while(!Qi.empty() && Qi.front() <= i-k) Qi.pop_front();
        while(!Qi.empty() && a[i]>=a[Qi.back()]) Qi.pop_back();
        Qi.push_back(i);
    }
    cout<<a[Qi.front()];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        List(a,n,k);
        cout<<endl;
    }
}

