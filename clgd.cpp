#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(15,0);
    int i=0;
    while(n>a[i]){
        i++;
        a[i]=i;
        n-=i;
    }
    int j=15;
    while(n>0){
       int t = min(n,j-a[i]);
        a[i]+=t;
        n-=t;
        j--;
        i--;
    }
    int first=1;
    for(int i=14;i>=0;i--){
        if(a[i]==0&&first==1) continue;
        else if(a[i]==10) cout<<"A";
        else if(a[i]==11) cout<<"B";
        else if(a[i]==12) cout<<"C";
        else if(a[i]==13) cout<<"D";
        else if(a[i]==14) cout<<"E";
        else if(a[i]==15) cout<<"F";
        else cout<<a[i];
        first=0;
    }
}