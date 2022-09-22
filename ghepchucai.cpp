#include<bits/stdc++.h>
using namespace std;
char a[10];
int check(int n){
    for(int i=1;i<n-1;i++){
        if(a[i]=='A'||a[i]=='E'){
            if(a[i-1]!='A' &&  a[i-1]!='E' && a[i+1]!='A' && a[i+1]!='E') return 0;
        }
    }
    return 1;
}
int main(){
    char c;
    cin>>c;
    int len=c-'A'+1;
    for(int i=0;i<len;i++) a[i]='A'+i;
    do{
        if(check(len)){ 
            for(int i=0;i<len;i++) cout<<a[i];
            cout<<endl;
        }
        // for(int i=0;i<len;i++) cout<<a[i];
        // cout<<endl;
    }while(next_permutation(a,a+len));
}