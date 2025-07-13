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
    ll x, y;
    cin >> x >> y;
    if (x >= y)
    {
        if (x % 2 == 0)
        {
            ll ans = (x) * (x) - (y - 1);
            cout << ans << endl;
        }
        else
        {
            ll ans = (x - 1) * (x - 1) + 1 + (y - 1);
            cout << ans << endl;
        }
    }
    else
    {
        if (y % 2 == 1)
        {
            ll ans = (y) * (y) - (x - 1);
            cout << ans << endl;
        }
        else{
            ll ans = (y - 1) * (y - 1) + 1 + (x - 1);
            cout << ans << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
     cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}