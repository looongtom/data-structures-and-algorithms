#include<bits/stdc++.h>
using namespace std;
int n;
void Print(vector<int>&a){
    for(int i=0;i<a.size();i++) cout<<a[i];
    cout<<endl;
}
int check(vector<int>&a){
    for(int i=1;i<a.size();i++){
        if(abs(a[i]-a[i-1])==1) return 0;
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>a;
        cin>>n;
        for(int i=0;i<n;i++) a.push_back(i+1);
        do{
            if(check(a)){ Print(a);}
        }
        while(next_permutation(a.begin(),a.end()));
    }
}