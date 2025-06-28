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
    vector<ll> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    if (a[n] == b[n])
    {
        cout << n << endl;
        return;
    }

    ll ans = 0;
    map<ll, ll> odd_a, odd_b, even_a, even_b;

    for (ll i = n; i >= 1; i--)
    {
        if (a[i] == b[i])
        {
            ans = i;
            break;
        }
        if (i % 2 == 1)
        {
            // for b[i] and a[i]
            // if(mae[a[i]] || mbo[a[i]] || mao[a[i]] || mbe[a[i]]-1>i)break;
            // if(mbe[b[i]] || mao[b[i]] || mbo[b[i]] || mae[b[i]]-1>i)break;
            if (even_a[a[i]] > 0 or odd_b[a[i]] > 0 or odd_a[a[i]] or even_b[a[i]] > (i + 1))
            {
                ans = max(ans, i);
                break;
            }
            if (even_b[b[i]] > 0 or odd_a[b[i]] > 0 or odd_b[b[i]] or even_a[b[i]] > (i + 1))
            {
                ans = max(ans, i);
                break;
            }
            odd_a[a[i]] = i;
            odd_b[b[i]] = i;
        }
        else
        {
            // for a[i] and b[i]
             if (odd_a[a[i]] > 0 or even_b[a[i]] > 0 or even_a[a[i]] or odd_b[a[i]] > (i + 1))
            {
                ans = max(ans, i);
                break;
            }
            if (odd_b[b[i]] > 0 or even_a[b[i]] > 0 or even_b[b[i]] or odd_a[b[i]] > (i + 1))
            {
                ans = max(ans, i);
                break;
            }
            even_a[a[i]] = i;
            even_b[b[i]] = i;
        }
    }
    cout << ans << endl;
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