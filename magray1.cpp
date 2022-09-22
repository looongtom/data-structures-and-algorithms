#include<bits/stdc++.h>
using namespace std;
vector<string>create(int n){
    if(n<=0) return {"0"};
    if(n==1) return {"0","1"};
    vector<string>rec=create(n-1);
    vector<string>m;
    for(int i=0;i<rec.size();i++){
        string s=rec[i];
        m.push_back("0"+s);
    }
    for(int i=rec.size()-1;i>=0;i--){
        string s=rec[i];
        m.push_back("1"+s);
    }
    return m;
}
void magray(int n){
    vector<string>a;
    a=create(n);
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
  //  cout<<" ";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        magray(n);
        cout<<endl;
    }
}