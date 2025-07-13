#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
ll a[5][5], b[5][5];

void mul(ll A[][5], ll B[][5], ll n)
{

    ll res[5][5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            res[i][j]=0;
            for(int k=0;k<n;k++)
            {
                ll x=(A[i][k]*B[k][j])%mod;
                res[i][j]=(res[i][j]+x)%mod;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            A[i][j]=res[i][j];
        }
    }
}

ll fibonacci(ll f1, ll f2, ll n)
{
    a[0][0] = a[1][1] = 1;
    a[0][1] = a[1][0] = 0;

    b[0][0] = 0;
    b[0][1] = b[1][0] = b[1][1] = 1;

    n--;
    while (n)
    {
        if (n % 2 == 1)
        {
            mul(a,b,2);
            n--;
        }
        else
        {
            mul(b, b, 2);
            n /= 2;
        }
    }
    ll ans=f1*a[0][1]+f2*a[1][1];
    return ans%mod;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll f1,f2,n;
        cin >>f1>>f2>> n;
        cout << fibonacci(f1, f2, n) << endl;
    }
    return 0;
}