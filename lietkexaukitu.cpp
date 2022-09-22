#include<bits/stdc++.h>
using namespace std;
char c;
int k,limit;
vector<int>a(105,0);
void Print(){
    for(int i=1;i<=k;i++){
        cout<<char(a[i]+'A');
    }
    cout<<endl;
}
void Try(int i){    
    for(int j=a[i-1];j<=limit;j++){
        a[i]=j;
        if(i==k) Print();
        else Try(i+1);
    }
}
int main(){
    cin>>c>>k;
    limit=c-'A';
    Try(1);
  
  //  for(int i=0;i<sCheck.size();i++) cout<<sCheck[i]<<endl;
}