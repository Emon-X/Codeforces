#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define pp pop_back()
#define mod 1000000007
#define endl "\n"
#define N 200005
ll dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
ll dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

void domain_expension()
{
    ll n;
    cin >> n;
    vector<ll> d(n);
    for (int i = 0; i < n; i++)
        cin >> d[i];

    vector<ll> l(n), r(n);
    for (int i = 0; i < n; i++)
        cin >> l[i] >> r[i];
    vector<ll> last;
    ll L = 0;

    for (int i = 0; i < n; i++)
    {
        if (d[i] == -1)
        {
            last.pb(i);
        }
        else
        {
            L += d[i];
        }

        while (L < l[i])
        {
            if (last.empty())
            {
                cout << -1 << endl;
                return;
            }
            d[last.back()] = 1;
            L += 1;
            last.pop_back();
        }
        while ((L + last.size()) > r[i])
        {
            if (last.empty())
            {
                cout << -1 << endl;
                return;
            }
            d[last.back()] = 0;
            last.pop_back();
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << max(0LL, d[i]) << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        domain_expension();
    return 0;
}