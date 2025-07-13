// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define pb push_back
// #define mod 1000000007
// #define N 100000
// vector<int> s(N);

// int dp[N];
// int fun(int i)
// {
//     if(i==0) return 0;

//     if(dp[i]!=-1) return dp[i];

//     int cost=INT_MAX;
//     cost=min(cost,fun(i-1)+abs(s[i]-s[i-1]));

//     if(i>1)
//     cost=min(cost,fun(i-2)+abs(s[i]-s[i-2]));

//     return dp[i]=cost;
// }

// void solve()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//         cin >> s[i];

//     cout << fun(n - 1) << endl;
// }

// int main()
// {
//     memset(dp,-1,sizeof(dp));
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     ll t = 1;
//     // cin>>t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define N 100000
vector<int> s(N);
ll dp[N];
int k;

int func(int j)
{
    if (j == 0)
        return 0;
    if (dp[j] != -1)
        return dp[j];
    int cost = INT_MAX;
    for (int i = 1; i <= k; i++)
    {
        if (j - i >= 0)
            cost = min(cost, func(j - i) + abs(s[j] + s[j - i]));
    }
    return dp[j] = cost;
}

void solve()
{
    int n;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> s[i];

    cout << func(n - 1) << endl;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}