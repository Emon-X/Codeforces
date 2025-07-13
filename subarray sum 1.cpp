#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    //ll cnt = 0;
    // ll sum = 0;
    // ll left = 0, right = 0;

    // while (right<n)
    // {
    //     sum += s[right];
    //     while (sum >= k)
    //     {
    //         if (sum == k)
    //             cnt++;
    //         sum -= s[left];
    //         left++;
    //     }
    //     right++;
    // }

    map<ll, ll> prefixSumCnt;
    ll sum = 0;
    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        sum += s[i];
        if (sum == k)
            cnt++;

        if (prefixSumCnt.find(sum - k) != prefixSumCnt.end())
            cnt += prefixSumCnt[sum - k];

        prefixSumCnt[sum]++;
    }
    cout << cnt << endl; // both are right solution
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
