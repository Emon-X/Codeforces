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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<ll> first(k + 1, -1), last(k + 1, -1);
    for (int i = 1; i <= n; i++) {
        if (first[a[i]] == -1) first[a[i]] = i;
        last[a[i]] = i;
    }
    for (int color = 1; color <= k; color++) {
        if (first[color] == -1) {
            cout << 0 << " ";
            continue;
        }
        // Find the farthest distance between any two positions where a[i] >= color
        int min_pos = -1, max_pos = -1;
        for (int i = 1; i <= n; i++) {
            if (a[i] >= color) {
                if (min_pos == -1) min_pos = i;
                max_pos = i;
            }
        }
        ll width = max_pos - min_pos + 1;
        cout << width * 2 << " ";
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