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

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> s;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.pb({x, i + 1});
    }
    sort(all(s));
    vector<ll> res;
    bool ok = false;
    for (int i = 0; i < n && !ok; i++)
    {
        for (int j = i + 1; j < n && !ok; j++)
        {
            ll y = k - (s[i].first + s[j].first);
            ll left = j + 1, right = n - 1;
            while (left < right)
            {
                if ((s[left].first + s[right].first) == y)
                {
                    res.pb(s[i].second);
                    res.pb(s[j].second);
                    res.pb(s[left].second);
                    res.pb(s[right].second);
                    ok = true;
                    break;
                }
                if ((s[left].first + s[right].first) < y)
                {
                    left++;
                }
                else
                    right--;
            }
        }
    }
    sort(all(res));
    if (ok)
    {
        for (auto u : res)
            cout << u << ' ';
        cout << endl;
    }
    else
        cout << "IMPOSSIBLE" << endl;
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