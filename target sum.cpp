#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define N 100000

ll k;
bool ok = false;
ll n;
ll ans = 0;
void target_Sum(ll ind, vector<ll> &v, ll sum, vector<ll> &s)
{
    // if (ok)
    //     return;
    if (ind == n)
    {
        if (sum == k)
        {
            ok = true;
            ans++;
            // for (auto u : v)
            // {
            //     cout << u << ' ';
            // }
            // cout << endl;
        }
        return;
    }
    v.pb(s[ind]);
    sum += s[ind];
    target_Sum(ind + 1, v, sum, s);
    v.pop_back();
    sum -= s[ind];
    target_Sum(ind + 1, v, sum, s);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    vector<ll> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    vector<ll> v;

    target_Sum(0, v, 0, s);
    cout << ans << endl;

    return 0;
}