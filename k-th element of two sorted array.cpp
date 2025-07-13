#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define pp pop_back()
#define mod 1000000007
#define N 100005
ll dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
ll dy[] = {0, 0, 1, -1, 1, -1, 1, -1};
ll k;
ll k_th_element(vector<ll> &a, vector<ll> &b)
{
    ll n1 = a.size(), n2 = b.size();
    if (n1 > n2)
        return k_th_element(b, a);
    ll low = max(0LL, k - n1);
    ll high = min(n1, k);
    ll left = k;
    while (low <= high)
    {
        ll mid1 = (low + high) / 2;
        ll mid2 = left - mid1;
        ll l1 = INT_MIN, l2 = INT_MIN;
        ll r1 = INT_MAX, r2 = INT_MAX;
        if (mid1 < n1)
            r1 = a[mid1];
        if (mid2 < n2)
            r2 = b[mid2];
        if (mid1 - 1 >= 0)
            l1 = a[mid1 - 1];
        if (mid2 - 1 >= 0)
            l2 = b[mid2 - 1];

        if (l1 <= r2 && l2 <= r1)
        {
            return max(l1, l2);
        }
        else if (l1 > r2)
            high = mid1 - 1;
        else
            low = mid1 + 1;
    }
}

void solve()
{
    ll n1, n2;
    cin >> n1 >> n2 >> k;
    vector<ll> a(n1), b(n2);
    for (int i = 0; i < n1; i++)
        cin >> a[i];
    for (int i = 0; i < n2; i++)
        cin >> b[i];

    cout << k_th_element(a, b) << endl;
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