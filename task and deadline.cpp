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

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        ll duration, deadline;
        cin >> duration >> deadline;
        v.pb({duration, deadline});
    }
    ll ans=0;
    sort(all(v));
    ll time=v[0].first;
    ans+=(v[0].second-time);
    for(int i=1;i<n;i++)
    {
        time+=(v[i].first);
        ll point=v[i].second-time;
        ans+=point;
    }
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