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

ll n, x;
void solve(ll i, ll sum, vector<ll> &sub, vector<ll> &s, ll &cnt)
{
    if (i == n)
    {
        if (sum == x)
        {
            for (auto u : sub)
            {
                cout << u << " ";
            }
            cout << endl;
            cnt++;
        }
        return;
    }
    sub.pb(s[i]);
    solve(i + 1, sum + s[i], sub, s, cnt);
    sub.pop_back();
    solve(i + 1, sum, sub, s, cnt);
}

void domain_expension()
{
    cin >> n >> x;
    vector<ll> s(n);
    for (ll i = 0; i < n; i++)
        cin >> s[i];

    vector<ll> sub;
    ll cnt = 0;
    solve(0, 0, sub, s, cnt);

    cout << cnt << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    domain_expension();
    return 0;
}