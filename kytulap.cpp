#include<bits/stdc++.h>
using namespace std;
int C[20][20],A[20],B[20]={0},n,fopt=INT_MAX,cmin=INT_MAX,cost=0;
void quaylui(int i){
    int j;
    for(j=1;j<=n;j++){
        if(!B[j]){
            A[i]=j;
            B[j]=1;
            cost = cost +C[A[i-1]][A[i]];
            if(i==n){
                fopt=min(fopt,cost);
            }
            else if(cost+cmin*(n-i+1) < fopt){
                quaylui(i+1);
            }
            cost = cost - C[A[i-1]][A[i]];
            B[j]=0;
        }
    }
}
int dem(string s1,string s2){
    int d=0,i=0,j=0;
    while(i<s1.size() && j<s2.size()){
        if(s1[i]==s2[j]){
            i++;
            j++;
            d++;
        }
        else if(s1[i]<s2[j]) i++;
        else j++;
    }
    return d;
}
int main(){
    cin>>n;
    vector<string>vs;
    for(int i=0;i<n;i++){
        string tmp;
        cin>>tmp;
        vs.push_back(tmp);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){ 
            if(i==j) C[i][j] = 1e9;
            else C[i][j]= dem(vs[i-1],vs[j-1]);
            cmin=min(cmin,C[i][j]);
        }
    }
    quaylui(1);
    cout<<fopt;
}