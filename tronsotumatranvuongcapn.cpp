#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int check(vector<vector<ull>>&a,int choose[],ull n,ull k){
    ull s=0;
    for(int i=0;i<n;i++){
        s+=a[i][choose[i]];
    }
    if(s==k) return 1;
    return 0;
}
int main(){
    ull n,k,coun=0;
    cin>>n>>k;
    vector<vector<ull>>a(n);
    int choose[n];
    for(int i=0;i<n;i++) choose[i]=i;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int tmp;
            cin>>tmp;
            a[i].push_back(tmp);
        }
    }
    
    do{
        if(check(a,choose,n,k)) coun++;
    }
    while(next_permutation(choose,choose+n));
    cout<<coun<<endl;

    for(int i=0;i<n;i++) choose[i]=i;
    do{
        if(check(a,choose,n,k)){ 
            for(int i=0;i<n;i++) cout<<choose[i]+1<<" ";
            cout<<endl;
        }
    }
    while(next_permutation(choose,choose+n));

}