#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define pp pop_back()
#define mod 1000000007
#define N 100005

ll dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
ll dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

ll n, k;
vector<ll> s;

bool good(ll m)
{
    ll x = 0;
    for (int i = 0; i < n; i++)
    {
        x += (m / s[i]);
        if (x >= k)
            return true;
    }
    return x >= k;
}

void solve()
{
    cin >> n >> k;
    s.resize(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    ll l = 0, r = 1e18; 
    while (r - l > 1)
    {
        ll m = l + (r - l) / 2;
        if (good(m))
        {
            r = m;
        }
        else
            l = m;
    }
    cout << r << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
