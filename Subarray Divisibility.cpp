#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define pp pop_back()
#define mod 1000000007
#define ha cout << "YES" << endl
#define na cout << "NO" << endl
#define N 100005
ll dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
ll dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

void solve()
{
    ll n;
    cin >> n;
    vector<ll> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    unordered_map<ll, ll> prefixcnt;
    ll cnt = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += s[i];
        if (sum % n == 0)
            cnt++;
        ll x=(sum%n+n)%n;
        if (prefixcnt.find(x) != prefixcnt.end())
            cnt += prefixcnt[x];
        prefixcnt[x]++;
    }
    // for(auto u:prefixcnt) cout<<u.first<<' '<<u.second<<endl;
    cout << cnt << endl;
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