#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define N 100000
#define NOT -1;
vector<ll> s = {1,2,5,10,20,50,100,200};
ll dp[20][N];

ll f(ll i, ll n) {
    if (n < 0) return INT_MAX;
    if (i == s.size()) {
        if (n == 0) return 0;
        return INT_MAX;
    }
    if (dp[i][n] != -1) return dp[i][n];

    ll res1 = 1 + f(i + 1, n - s[i]);
    ll res2 = f(i + 1, n);
    dp[i][n] = min(res1, res2);

    return dp[i][n];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(dp, -1, sizeof(dp));
    ll n;
    cin >> n;
    ll ans = INT_MAX;
    for (int i = 0; i < 8; i++) {
        ans = min(ans, f(i, n));
    }
    cout<< ans << endl;
    return 0;
}
