#include<bits/stdc++.h>
using namespace std;
vector<int>convert(string s){
    int len=s.size();
    vector<int>a;
    for(int i=0;i<len;i++){
        int tmp=s[i]-'0';
        a.push_back(tmp);
    }
    return a;
}
int check(vector<int>&a){
    for(int i=0;i<a.size()-1;i++){
        if(a[i]>a[i+1]) return 0;
    }
    return 1;
}
void Print(vector<int>&a){
    if(check(a)) cout<<"BIGGEST\n";
    else{
    for(int i=0;i<a.size();i++) cout<<a[i];
        cout<<endl;
    }
}
int main(){
    int t,num[1006];
    cin>>t;
    vector<vector<int>>result;
    for(int i=0;i<t;i++){
        int tmp;
        cin>>tmp;
        num[i]=tmp;
        string s;
        cin>>s;
        vector<int>a=convert(s);
        next_permutation(a.begin(),a.end());
        result.push_back(a);
        // for(int i=0;i<a.size();i++) cout<<a[i];
        // cout<<endl;
    }
    for(int i=0;i<result.size();i++){
        cout<<i+1<<" ";
        Print(result[i]);
    }
}