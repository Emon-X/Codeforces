// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define pb push_back
// #define pp pop_back()
// #define mod 1000000007
// #define ha cout << "YES" << endl;
// #define na cout << "NO" << endl;

// void solve()
// {
//     ll n, k;
//     cin >> n >> k;
//     vector<ll> s(n);
//     unordered_map<ll, vector<ll>> v; // Changed to unordered_map to handle indices more effectively
//     ll sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> s[i];
//         sum += s[i];
//         v[s[i]].pb(i + 1);
//     }
//     if (n <= 2 || sum < k)
//     {
//         cout << "IMPOSSIBLE" << endl;
//         return;
//     }
//     vector<ll> res;
//     bool found = false;

//     for (int i = 0; i < n && !found; i++)
//     {
//         for (int j = i + 1; j < n && !found; j++)
//         {
//             ll x = s[i] + s[j];
//             ll y = k - x;
//             if(y<0) continue;
//             if (y != s[i] && y != s[j] && v.find(y) != v.end())
//             {
//                 cout << i + 1 << ' ' << j + 1 << " " << v[y][0] << endl;
//                 return;
//             }
//             else if (y == s[i] && v[y].size() > 1)
//             {
//                 res.pb(i + 1);
//                 res.pb(j + 1);
//                 for (auto u : v[y])
//                 {
//                     if (u != (i + 1) && u != (j + 1))
//                     {
//                         res.pb(u);
//                         break;
//                     }
//                 }
//                 found = true;
//             }
//             else if (y == s[j] && v[y].size() > 1)
//             {
//                 res.pb(i + 1);
//                 res.pb(j + 1);
//                 for (auto u : v[y])
//                 {
//                     if (u != (i + 1) && u != (j + 1))
//                     {
//                         res.pb(u);
//                         break;
//                     }
//                 }
//                 found = true;
//             }
//         }
//     }

//     if (!found)
//     {
//         cout << "IMPOSSIBLE" << endl;
//     }
//     else
//     {
//         cout << res[0] << ' ' << res[1] << ' ' << res[2] << endl;
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     ll t = 1;
//     // cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define pp pop_back()
#define mod 1000000007

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> s(n); // Pair to store values and their original indices

    for (int i = 0; i < n; i++)
    {
        cin >> s[i].first;
        s[i].second = i + 1; // Store 1-based index
    }

    // Sort the array based on values
    sort(all(s));

    for (int i = 0; i < n; i++)
    {
        ll target = k - s[i].first;
        int left = i + 1, right = n - 1;

        // Two-pointer technique to find the remaining two numbers
        while (left < right)
        {
            ll sum = s[left].first + s[right].first;
            if (sum == target)
            {
                // Output the indices in ascending order
                cout << s[i].second << ' ' << s[left].second << ' ' << s[right].second << endl;
                return;
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
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
