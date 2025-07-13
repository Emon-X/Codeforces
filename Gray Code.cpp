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
ll n;

vector<string> Gray_dfs(ll n)
{
    if (n == 1)
    {
        return {"0", "1"};
    }
    vector<string> s = Gray_dfs(n - 1);
    vector<string> res;
    
    for(auto u:s)
    {
        res.pb("0"+u);
    }
    for(int i=s.size()-1;i>=0;i--)
    {
        res.pb("1"+s[i]);
    }
    return res;
}

void solve()
{
    cin >> n;
    vector<string>Graycode=Gray_dfs(n);

    for(auto u:Graycode) cout<<u<<endl;
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