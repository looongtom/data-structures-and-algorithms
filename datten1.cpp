#include<bits/stdc++.h>
using namespace std;
void taotohop(vector<vector<string>>&c,vector<string>&tmp,int left,int n,int k,vector<string>&a){
        if(k==0){
                c.push_back(tmp);
                return;
        }
        for(int i=left;i<n;i++){
                tmp.push_back(a[i]);
                taotohop(c,tmp,i+1,n,k-1,a);
                tmp.pop_back();
        }
}
vector<vector<string>>tohop(vector<string>&a,int n,int k){
        vector<vector<string>>c;
        vector<string>tmp;
        taotohop(c,tmp,1,n,k,a);
        return c;
}
int main(){
        int n,k;
        cin>>n>>k;
        vector<string>a;
        set<string>s;
        for(int i=0;i<n;i++){
                string tmp;
                cin>>tmp;
                s.insert(tmp);
        }
        a.push_back("NOTHING");
        for(auto x:s){
                a.push_back(x);
        }
       vector<vector<string>>c=tohop(a,a.size(),k);
       for(int i=0;i<c.size();i++){
               for(int j=0;j<c[i].size();j++) cout<<c[i][j]<<" ";
               cout<<endl;
       }
}