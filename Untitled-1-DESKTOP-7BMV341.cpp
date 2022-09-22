#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int Check(ull x){
    while(x>0){
      if( (x%10)!=9 || (x%10)!=0) return 0;
      x/=10;
    }
    return 1;
}
int main(){
  int check=0;
  ull i=1;
   while(!check){
    if(i%499==0 && Check(i)){
      cout<<i;
      check=1;
      break;
    }
    else i++;
  }
}