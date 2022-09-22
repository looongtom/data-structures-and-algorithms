#include<bits/stdc++.h>
using namespace std;
long long a[10003];
long long convert(int n){
    vector<long long>b;
    long long res=0;
    while(n>0){
        b.push_back(n%2);
        n/=2;
    }
    for(int i=b.size()-1;i>=0;i--)  res= res*10 + b[i];

    return res;
}
void create(int x){
    a[1]=1;
    for(int i=2;i<=x;i++){
        a[i]= convert(i);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        create(x);
        for(int i=1;i<=x;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
