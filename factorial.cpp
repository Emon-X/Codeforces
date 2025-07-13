#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define pp pop_back()
#define mod 1000000007
#define ha cout << "YES" << endl
#define na cout << "NO" << endl
#define N 100005
ll dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
ll dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

// Template for ordered set
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{

    vector<ll> v(200000, 1);
    v.pb(1);
    for (int i = 2; i <= 200000; i++)
    {
        v[i] = (v[i - 1] * i);
        v[i] = (v[i] % mod);
    }
    set<ll> st;
    cout << v[5] << endl;

    for (int i = 1; i <= 200000; i++)
    {
        st.insert(v[i]);
    }
    cout << st.size() << endl;
    // for(auto u:st) cout<<u<<' ';cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}