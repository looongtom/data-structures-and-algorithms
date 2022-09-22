#include<bits/stdc++.h>
using namespace std;
int main(){
        int n; string s;
        cin>>n;  
         cin.ignore();
        vector<int>a[100];
        for(int i=1;i<=n;i++){
            getline(cin,s);
            s+=" ";
            int k=0,num=0;
            while(k<s.size()){
                if(s[k]>='0' && s[k]<='9'){
                    num= num*10 + int(s[k]-'0');
                }
                else if(num>0){
                    a[i].push_back(num);
                    num=0;
                }
                k++;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<a[i].size();j++){
               if(i<a[i][j]) cout<<i<<" "<<a[i][j]<<endl;
            }
        }
    
}