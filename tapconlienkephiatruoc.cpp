#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k; 
        cin >> n >> k;
        int a[k+2];
        for(int i = 1; i <= k; i++) cin >> a[i];
        int i = k;
        while(i>0 && a[i] == a[i-1] + 1) i--;
        if(i == 1 && a[1] == 1){
            for(int j = k; j >= 1; j--) cout << n-j+1 << " ";
        }
        else {
            a[i] --;
            for(int j = i+1; j <= k; j++) a[j] = n-k+j;
            for(int i = 1; i <= k; i++) cout << a[i] << " ";
        }
        cout << endl;
    }
}