#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007

ll co_prime(ll n)
{
    ll ans = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            ans *= (i - 1);
            ans /= i;
        }
    }
    if (n > 1)
    {
        ans *= (n - 1);
        ans /= n;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << co_prime(n) << endl;
    }
    return 0;
}