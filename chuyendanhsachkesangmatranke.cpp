#include<bits/stdc++.h>
using namespace std;
int a[1006][1006]={0};
int main(){
    int n,j;
    cin>>n;
    cin.ignore();
   // memset(a,0,sizeof(a));
    for(int i=1;i<=n;i++){
        string s;
        getline(cin,s);
        istringstream ss(s);
        while(ss>>j) a[i][j]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
}   