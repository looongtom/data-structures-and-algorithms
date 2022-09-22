#include<iostream>
#include<algorithm>
using ll = long long;
using namespace std;
int Last_ptu(ll a[], int l, int r, ll x)
{
    int res = -1;
    while(l <= r)
    {
        int m = l+(r-l)/2;
        if(a[m] <= x)
        {
            res = m;
            l = m+1;
        }
        else r = m-1;
    }
    return res;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n,x; cin >> n >> x;
        ll a[n];
        for(ll &x : a) cin >> x;
        int res = Last_ptu(a,0,n-1,x);
        if(res != -1)
        cout << res+1;
        else cout << -1;
        cout << endl;
    }
}