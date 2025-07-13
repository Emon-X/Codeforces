#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define pp pop_back()
#define mod 1000000007
#define ha cout << "YES" << endl;
#define na cout << "NO" << endl;
#define N 100005
ll dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
ll dy[] = {0, 0, 1, -1, 1, -1, 1, -1};
vector<ll> s;
ll dp[N];

ll dfs(ll k)
{
    if (k < 0)
        return INT_MAX;
    if (k == 0)
        return 0;
    if(dp[k]!=-1) return dp[k];

    ll number_of_coin = INT_MAX;
    for (auto u : s)
    {
        number_of_coin = min(number_of_coin, dfs(k - u) + 1);
    }
    return dp[k]=number_of_coin;
}

void solve()
{
    ll n;
    cin >> n;
    s.resize(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    ll k;
    cin >> k;
    cout << dfs(k) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(dp, -1, sizeof(dp));
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}