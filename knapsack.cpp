#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define N 100000

ll knapsack(ll weight[], ll val[], ll w, ll n)
{
    if (n == 0 || w == 0)
        return 0;

    if (weight[n - 1] <= w)
    {
        return max(
            val[n - 1] + knapsack(weight, val, w - weight[n - 1], n - 1),knapsack(weight, val, w, n - 1));
    }
    else
    {
        return knapsack(weight, val, w, n - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    ll weight[n], val[n];
    for (int i = 0; i < n; i++)
        cin >> weight[i];
    for (int i = 0; i < n; i++)
        cin >> val[i];
    ll w;
    cin >> w;

    cout << knapsack(weight, val, w, n) << endl;

    return 0;
}
