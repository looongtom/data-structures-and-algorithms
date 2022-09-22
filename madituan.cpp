#include<bits/stdc++.h>
using namespace std;
int A[ 106] [106] = { 0 };
int X[8] = { -2, -2, -1, -1, 1, 1, 2, 2};
int Y[8] = { -1, 1, -2, 2,-2, 2, -1, 1} ;
int coun = 0;
int n;
int check=1;

void Print (){
    for (int i=0; i<n; i++ ) {
        for (int j=0; j<n;j++) cout<<A[i][j]<<" ";
            cout<<endl;
    }
}
void dichuyen(int x, int y){
    coun++;
    A[x][y]=coun;
    for (int i=0;i<8;i++){
    if (coun == n*n){
    Print();
    check=0;
    exit(1);
    }
    int u=x+X[i];
    int v=y+Y[i];
    if(u>=0 && u<n && v>=0 & v<n && A[u][v]==0) dichuyen(u, v) ;
    }
    coun--;
    A[x][y]=0;
}
int main(){
cin>>n;
int x,y;
cin>>x>>y;
dichuyen (x, y);
if(check) cout<<"Khong tim duoc";
}
