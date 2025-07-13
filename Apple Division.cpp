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
    ll n;
    cin >> n;
    vector<ll> s(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
        cin >> s[i], sum += s[i];
    ll ans = INT_MAX;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        ll x = 0;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                x += s[i];
            }
        }
        ll y = sum - x;
        ans = min(ans, abs(y - x));
    }
    cout<<ans<<endl;
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