#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define pp pop_back()
#define mod 1000000007
#define endl "\n"
#define N 200005
ll dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
ll dy[] = {0, 0, 1, -1, 1, -1, 1, -1};
ll n, w, k;

ll cnt(ll start, vector<ll> &y)
{
    ll c = 1;
    ll strt = y[start];
    for (int i = start + 1; i < y.size(); i++)
    {
        if (y[i] <= (strt + w))
            c++;
        else
            break;
    }
    return c;
}

void domain_expension()
{
    cin >> n >> w >> k;
    vector<ll> y;
    for (int i = 0; i < n; i++)
    {
        ll u, v;
        cin >> u >> v;
        y.pb(v);
    }
    sort(all(y));

    vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, 0));

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 1; j <= k; j++)
        {
            ll dust_cnt = cnt(i, y);
            dp[i][j] = max(dp[i + 1][j], dust_cnt + dp[i + dust_cnt][j - 1]);
        }
    }
    cout << dp[0][k] << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        domain_expension();
    }
    return 0;
}