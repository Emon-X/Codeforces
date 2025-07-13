#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define pp pop_back()
#define mod 1000000007
#define N 100005

void solve() {
    ll n;
    cin >> n;
    vector<ll> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    vector<vector<ll>> v; 

    for (int i = 0; i < n; i++) {
        ll x = s[i];
        bool placed = false;

        // Find an existing group to place the element
        for (int j = 0; j < v.size(); j++) {
            if (v[j].back() > x) {
                v[j].pb(x);
                placed = true;
                break;
            }
        }

        // Create a new group if no suitable group exists
        if (!placed) {
           v.pb(vector<ll>{x});
        }
    }

    // Print the groups
    // for (auto row : v) {
    //     for (int num : row) {
    //         cout << num << " ";
    //     }
    //     cout << endl;
    // }
    cout<<v.size()<<endl;

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