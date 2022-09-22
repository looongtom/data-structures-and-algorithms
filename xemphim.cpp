#include<iostream>
using namespace std;
int dp[105][25005];
int main()
{
    int t=1;
    while(t--)
    {
        int n,v; cin >> v >> n;
        int a[n+2];
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 0; i <= v; i++)
        dp[0][i] = 0;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= v; j++)
            {
                if(a[i] <= j) dp[i][j] = max(dp[i-1][j],dp[i-1][j-a[i]]+a[i]);
                else dp[i][j] = dp[i-1][j];
            }
        }
        cout << dp[n][v] << endl;
    }
}