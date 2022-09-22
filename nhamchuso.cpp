#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Min(string a,string b){
    ll sA=0,sB=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='6') sA=sA*10+5;
        else{
            int tmp=a[i]-'0';
            sA=sA*10+tmp;
        }
    }
    for(int i=0;i<b.size();i++){
        if(b[i]=='6') sB=sB*10+5;
        else{
            int tmp=b[i]-'0';
            sB=sB*10+tmp;
        }
    }
    return sA+sB;
}
ll Max(string a,string b){
    ll sA=0,sB=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='5') sA=sA*10+6;
        else{
            int tmp=a[i]-'0';
            sA=sA*10+tmp;
        }
    }
    for(int i=0;i<b.size();i++){
        if(b[i]=='5') sB=sB*10+6;
        else{
            int tmp=b[i]-'0';
            sB=sB*10+tmp;
        }
    }
    return sA+sB;
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<Min(a,b)<<" "<<Max(a,b);
}