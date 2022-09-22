#include<bits/stdc++.h>
using namespace std;
typedef long long ull;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ull>a(n);
        vector<vector<ull>>r;
        for(int i=0;i<n;i++) cin>>a[i];

        for(int i=0;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        vector<ull>tmp;
        for(int k=0;k<=i;k++){
             tmp.push_back(a[k]);
        }
        r.push_back(tmp);
        cout<<endl;
    }

        for(int i=r.size()-1;i>=0;i--){
            cout<<"Buoc "<<i<<": ";
            for(int j=0;j<r[i].size();j++) cout<<r[i][j]<<" ";
            cout<<endl;
        }
    }
}