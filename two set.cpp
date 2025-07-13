#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
#define ha cout << "YES" << endl
#define na cout << "NO" << endl

void solve() {
    ll n;
    cin >> n;
    ll total = (n * (n + 1)) / 2;
    if (total % 2) {
        na;
        return;
    }
    ll x = total / 2;
    vector<ll> set1, set2;
    for (ll i = n; i >= 1; --i) {
        if (x >= i) {
            set1.pb(i);
            x -= i;
        } else {
            set2.pb(i);
        }
    }

    ha;
    cout << set1.size() << endl;
    for (auto u : set1) cout << u << " "; cout << endl;
    cout << set2.size() << endl;
    for (auto u : set2) cout << u << " "; cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
