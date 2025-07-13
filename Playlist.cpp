#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define pp pop_back()
#define mod 1000000007
#define N 100005
// Directions for moving up, down, left, right, and diagonally
ll dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
ll dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> r(n);
    for (int i = 0; i < n; i++)
        cin >> r[i];

    vector<pair<ll, ll>> s;
    for (int i = 0; i < n; i++)
    {
        s.pb({r[i], i});
    }
    while (m--)
    {
        ll ff, last;
        cin >> ff >> last;
        swap(s[ff - 1], s[last - 1]);
        sort(all(s));
        ll ans = 0;
        ll cnt = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i].second > s[i + 1].second)
                cnt++;
        }
        cout << cnt << endl;
    }
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
        solve();
    }
    return 0;
}
