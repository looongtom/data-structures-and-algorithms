#include<bits/stdc++.h>
using namespace std;
struct Num{
    int val,pos;
};
bool cus(Num a, Num b){
    if(a.val<b.val) return true;
    else if(a.val==b.val && a.pos<b.pos) return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,coun=0;
        cin>>n;
        vector<Num>a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i].val;
            a[i].pos=i+1;
        }
        sort(a.begin(),a.end(),cus);
        for(int i=1;i<=n;i++){
            if(a[i].pos!=i){
                coun++;
                swap(a[i],a[a[i].pos]);
                for(int i=1;i<n;i++) cout<<a[i].val<<" ";
            }
             cout<<endl;
        }
       
        cout<<coun<<endl;
    }
}
// 1 5 4 3 2 
// 1 2 3 4 5