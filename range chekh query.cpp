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

bool cmp(const pair<pair<ll, ll>, ll>& a, const pair<pair<ll, ll>, ll>& b) {
    if (a.first.first == b.first.first)
        return a.first.second > b.first.second;
    return a.first.first < b.first.first;
}

void solve() {
    ll n;
    cin >> n;
    vector<pair<pair<ll, ll>, ll>> v;
    for (ll i = 0; i < n; i++) {
        ll left, right;
        cin >> left >> right;
        v.pb({{left, right}, i});
    }
    
    sort(all(v), cmp);
    
    vector<bool> contain(n, false);
    vector<bool> contained(n, false);
    
    ll mn = LLONG_MAX;
    for (ll i = n - 1; i >= 0; i--) {
        if (v[i].first.second >= mn) {
            contain[v[i].second] = true;
        }
        mn = min(mn, v[i].first.second);
    }
    
    ll mx = LLONG_MIN;
    for (ll i = 0; i < n; i++) {
        if (v[i].first.second <= mx) {
            contained[v[i].second] = true;
        }
        mx = max(mx, v[i].first.second);
    }
    
    for (ll i = 0; i < n; i++)
        cout << contain[i] << ' ';
    cout << endl;
    
    for (ll i = 0; i < n; i++)
        cout << contained[i] << ' ';
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
