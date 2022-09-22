#include<bits/stdc++.h>
using namespace std;
void Xuly(int n,char a,char b){
    cout<<a<<" -> "<<b<<endl;
}
void Thap(int n,char a,char b,char c){
    if(n==1)Xuly(1,a,c);
    else{
        Thap(n-1,a,c,b);
        Xuly(n,a,c);
        Thap(n-1,b,a,c);
    }
}
int main(){
    int n;
    cin>>n;
    char a='A',b='B',c='C';
    Thap(n,a,b,c);
}

