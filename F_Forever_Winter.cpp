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

void domain_expension()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> deg(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        deg[u]++;
        deg[v]++;
    }
    map<ll, ll> freq;
    for (int i = 1; i <= n; i++)
        freq[deg[i]]++;

    ll leaf_cnt = freq[1];
    vector<pair<ll, ll>> degs;
    for (auto [d, f] : freq)
    {
        if (d != 1)
            degs.push_back({d, f});
    }
    ll x, y;
    if (degs.size() == 1)
    {
        x = degs[0].second - 1;
        y = leaf_cnt / x;
    }
    else
    {
        for (auto [d, f] : degs)
        {
            if (f == 1)
                x = d;
            else
                y = d - 1;
        }
    }
    cout << x << " " << y << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        domain_expension();
    return 0;
}