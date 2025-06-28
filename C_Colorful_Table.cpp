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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<ll> min_pos(k + 2, INT_MAX), max_pos(k + 2, INT_MIN), has(k + 2, 0);
    for (ll i = 1; i <= n; i++) {
        min_pos[a[i]] = min(min_pos[a[i]], i);
        max_pos[a[i]] = max(max_pos[a[i]], i);
        has[a[i]] = 1;
    }

    for (ll c = k; c >= 1; c--) {
        min_pos[c] = min(min_pos[c], min_pos[c + 1]);
        max_pos[c] = max(max_pos[c], max_pos[c + 1]);
    }
    for (ll c = 1; c <= k; c++) {
        if (!has[c]) {
            cout << 0 << " ";
        } else {
            cout << 2 * (max_pos[c] - min_pos[c] + 1) << " ";
        }
    }
    cout << endl;
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