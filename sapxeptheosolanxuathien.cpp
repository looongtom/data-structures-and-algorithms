#include<bits/stdc++.h>
using namespace std;
struct Num{
    int val,fre;
};
bool cus(Num a,Num b){
    if(a.fre>b.fre) return 1;
    else if(a.fre==b.fre && a.val<b.val) return 1;
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<Num>a(n);
        vector<int>b(n,0);
        for(int i=0;i<n;i++){ 
            cin>>a[i].val;
            a[i].fre=0;
        }
        for(int i=0;i<n;i++){
            if(a[i].fre==0) a[i].fre=1;
            for(int j=i+1;j<n;j++){
                if(a[i].val==a[j].val){
                    a[i].fre++;
                    a[j].fre=-1;
                }
            }
        }
         for(int i=0;i<n;i++){
             for(int j=i+1;j<n;j++) if(a[i].val==a[j].val) a[i].fre>a[j].fre?a[j].fre=a[i].fre:a[i].fre=a[j].fre;
         }
         sort(a.begin(),a.end(),cus);
         for(int i=0;i<n;i++) cout<<a[i].val<<" ";
       // for(int i=0;i<n;i++) cout<<a[i].fre<<" ";
        cout<<endl;
    }
}