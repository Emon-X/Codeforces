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
    vector<ll> s;
    for (int i = 1; i <= n; i++)
        s.pb(i);
    vector<ll> r;

    while(s.size()>1)
    {
        vector<ll>survivor;
        for(int i=0;i<s.size();i++)
        {
            if(i%2==1) cout<<s[i]<<" ";
            else survivor.pb(s[i]);
        }
        if(s.size()%2==0) s=survivor;
        else{
            ll start=survivor.back();
            survivor.pp;
            s.clear();
            s.pb(start);
            for(auto u:survivor) s.pb(u);
        }
    }
    cout<<s[0]<<" ";
    cout<<endl;
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