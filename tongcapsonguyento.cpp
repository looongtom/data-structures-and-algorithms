#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,check=0;
        cin>>n;
        vector<bool>prime(n+1,true);
        prime[0]=false;prime[1]=false;
        for(int p=2;p*p<=n;p++){
            if(prime[p]==true){
                for(int i=p*p;i<=n;i+=p) prime[i]=false;
            }
        }
        for(int i=0;i<=n;i++){
            if(prime[i]){
                if(prime[n-i]){ 
                    check=1;
                    cout<<i<<" "<<n-i<<endl;
                    break;
                }
            }
        }
        if(check==0) cout<<-1<<endl;
    }
}