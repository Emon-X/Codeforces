#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

ll n;
vector<ll> s;

void dfs()
{
    if (s.size() == n)
    {
        for (auto u : s)
            cout << u;
        cout << endl;
        return;
    }

    // Try to push 0
    s.pb(0);
    dfs();
    s.pop_back();

    // Try to push 1 only if the last element is not 1
    if (s.empty() || s.back() != 1)
    {
        s.pb(1);
        dfs();
        s.pop_back();
    }
}

void solve()
{
    cin >> n;
    dfs();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
