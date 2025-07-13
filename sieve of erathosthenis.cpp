#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
vector<ll> v;
set<ll> st;
void sieve(ll n = 1e6)
{
    vector<bool> is_prime(n + 1, true);
    for (int i = 4; i <= n; i += 2)
        is_prime[i] = false;
    is_prime[0] = is_prime[1] = false;
    st.insert(2);
    for (int i = 3; i * i <= n; i += 2)
    {
        if (is_prime[i])
        {
            v.pb(i);
            st.insert(i);
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    // cout<<"total prime numbers"<<"="<<' '<<v.size()<<endl;
    //  for (auto u : v)
    //      cout << u << ' ';
    //  cout << endl;
}
void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (st.find(n) != st.end())
        {
            cout << "Yes" << endl;
        }
        else
            cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    solve();
    return 0;
}
