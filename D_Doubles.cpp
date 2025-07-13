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
    ll n;
    cin >> n;
    vector<ll> g[n + 1];
    vector<map<ll, ll>> m1(n), m2(n);
    for (int i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            ll x;
            cin >> x;
            g[i].pb(x);
            m1[i][x]++;
        }
    }
    double long ans = 0.0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double long sum = 0.0;
            for (auto [u, f] : m1[i])
            {
                if (m1[j].count(u))
                {
                    ll f1 = m1[j][u];
                    sum += (f / (double)g[i].size() * f1 / (double)g[j].size());
                }
            }
            ans = max (ans,sum);
        }
    }
    cout << setprecision(15) << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    domain_expension();
    return 0;
}