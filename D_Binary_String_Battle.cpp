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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> p;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1')
        {
            p.push_back(i);
        }
    }
    ll c = p.size();
    if (c <= k)
    {
        cout << "Alice\n";
        return;
    }
    if (2 * k <= n)
    {
        cout << "Bob\n";
        return;
    }
    ll ok = false;
    ll cnt = 0;
    for (auto ch:s)
    {
        if (ch == '0') cnt++;
        else cnt=0;


        if (cnt >= k)
        {
            ok = true;
            break;
        }
    }

    if(!ok) cout<<"Alice\n";
    else cout<<"Bob\n";
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