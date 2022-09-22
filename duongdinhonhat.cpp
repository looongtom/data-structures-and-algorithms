#include<bits/stdc++.h>
using namespace std;
int n,m,a[1006][1006],F[1006][1006];
void solve(){
    memset(F,0,sizeof(F));
    F[1][1]=a[1][1];
   for(int i=1;i<=n;i++){
       for(int j=1;j<=m;j++){
           if(i==1) F[i][j]= a[i][j] + F[i][j-1];
           else if(j==1) F[i][j]= a[i][j] + F[i-1][j];
          else F[i][j] = a[i][j]+ min( F[i-1][j], min(F[i][j-1], F[i-1][j-1] ) );
       }
   }
   cout<<F[n][m]<<endl;
  /*for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++) cout<<F[i][j]<<" ";
      cout<<endl;
  }*/
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++) cin>>a[i][j];
        }
        solve();
    }
}