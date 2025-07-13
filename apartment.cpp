#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
#define N 100005
// Directions for moving up, down, left, right, and diagonally
ll dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
ll dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n), b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    multiset<ll> st;
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
        st.insert(b[j]);
    }
    ll ans = 0;
    sort(all(a));
    for (int i = 0; i < n; i++)
    {
        ll ff = a[i] - k;
        ll last = a[i] + k;

        auto lw = st.lower_bound(ff);

        if (lw != st.end() && *lw <= last)
        {
            ans++;
            st.erase(lw);
        }
    }
    cout << ans << endl;
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
