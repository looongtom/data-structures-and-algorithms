#include<iostream>
using namespace std; 
#define ll long long
int const mod = 1e9+7;
struct Matrix{
    ll f[11][11];
};
ll n;
Matrix operator * (Matrix a,Matrix b)
{
    Matrix c;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            c.f[i][j] = 0;
            for(int l = 0; l < n; l++)
            c.f[i][j] = (c.f[i][j] + a.f[i][l]*b.f[l][j])%mod;
        }
    }
    return c;
}
Matrix PowMod(Matrix a, int k)
{
    if(k == 1) return a;
    Matrix c = PowMod(a, k/2);
    if(!(k%2)) return c*c;
    return  a*c*c;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll k;
        cin >> n >> k;
        Matrix A;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            cin >> A.f[i][j];
        }
        Matrix C = PowMod(A,k);
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += C.f[i][n-1];
            sum %= mod;
        }
        cout << sum << endl;
    }
}