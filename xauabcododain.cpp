#include<bits/stdc++.h>
using namespace std;
void Print(vector<char>&a,int n){
    for(int i=0;i<n;i++) cout<<a[i];
    cout<<" ";
}
char change(char c){
    if(c=='A') return 'B';
    return 'A';
}
void create(vector<char>&a,int n){
    //change(a[n-1]);
    a[n-1]++;
    for(int i=n-1;i>0;i--){
        if(a[i]>'B'){
            a[i-1]++;
            a[i]-=2;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char>a(n);
        for(int i=0;i<n;i++) a[i]='A';
        for(int i=0;i<pow(2,n);i++){
            Print(a,n);
            create(a,n);
        }
        cout<<endl;
    }
}