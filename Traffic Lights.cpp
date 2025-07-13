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

void solve()
{
    ll n, k;
    cin >> n >> k;
    set<ll> st;
    set<ll, greater<ll>> s;
    s.insert(0);
    s.insert(n);
    multiset<ll> m;
    m.insert(n);
    st.insert(0);
    st.insert(n);
    while (k--)
    {
        ll x;
        cin >> x;
        auto up = st.upper_bound(x);
        auto lw = s.lower_bound(x);
        st.insert(x);
        s.insert(x);
        ll ff = *lw, last = *up;
        // cout << *up << " " << *lw << endl;
        m.erase(m.find(last - ff));
        m.insert(last-x);
        m.insert(x-ff);

        cout<<*m.rbegin()<<" ";
    }
    cout<<endl;
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