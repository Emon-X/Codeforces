#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define pp pop_back()
#define mod 1000000007
#define N 100005
// Directions for moving up, down, left, right, and diagonally
ll dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
ll dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, bool>> v;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.pb({x, true});
        v.pb({y, false});
    }
    sort(all(v));
    ll ans=0;
    ll cnt=0;
    for(auto u:v)
    {
        if(u.second)
        {
            cnt++;
            ans=max(ans,cnt);
        }
        else{
            cnt--;
        }
    }
    ans=max(ans,cnt);
    cout<<ans<<endl;
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