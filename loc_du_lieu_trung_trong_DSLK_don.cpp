#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	cin >> n;
	int a[n];
	bool b[1000005];
	memset( b, false, sizeof( b));
	for( int i = 0; i < n; i++){
		cin >> a[i];
		b[a[i]] = true;
	}
	for( int i = 0; i < n; i ++){
		if( b[a[i]] == true){
			cout << a[i] << " ";
			b[a[i]] = false;
		}
	}
}
