#include<bits/stdc++.h>
using namespace std;
void findCommon(int l1,int l2,int l3,int a[],int b[],int c[]){
    int i=0,j=0,k=0,check=-1;;
    while(i<l1 && j<l2 && k<l3){
        if(a[i]==b[j] && b[j]==c[k]){
            cout<<a[i]<<" ";
            check=1;
            i++; j++; k++;
        }
        else if( a[i] < b[j]) i++;
        else if(b[j] < c[k]) j++;
        else k++;
    }
    if(check==-1) cout<<"NO\n";
    else cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int l1,l2,l3;
        cin>>l1>>l2>>l3;
        int *a=new int[l1], *b=new int[l2],*c=new int[l3];
        for(int i=0;i<l1;i++) cin>>a[i];
        for(int i=0;i<l2;i++) cin>>b[i];
        for(int i=0;i<l3;i++) cin>>c[i];
        findCommon(l1,l2,l3,a,b,c);
    }
}