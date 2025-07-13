#include <iostream>
#include <vector>
#include <set>
using namespace std;

#define ll long long int

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> s(n);
    for (ll i = 0; i < n; ++i) {
        cin >> s[i];
    }

    vector<ll> prefix_sum(n + 1, 0);
    for (ll i = 0; i < n; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + s[i];
    }

    ll max_sum = -999999999999999999;

    // set<pair<ll,ll>> st;
    // for (ll i = a; i <= b; ++i) {
    //     st.insert({prefix_sum[i],i});
    // }
    // for(int i=1;i<=n-a+1;i++)
    // {
    //     max_sum=max(max_sum,st.rbegin()->first-prefix_sum[i-1]);
    //     st.erase({prefix_sum[i+a-1],i+a-1});
    //     if(i+b<=n)
    //     {
    //         st.insert({prefix_sum[i+b],i+b});
    //     }
    // }

    //another solution
    multiset<ll>st;
    for(int i=a;i<=n;i++)
    {
        if(i>b)
        {
            st.erase(st.find(prefix_sum[i-b-1]));
        }
        st.insert(prefix_sum[i-a]);
        max_sum=max(max_sum,prefix_sum[i]-*st.begin());
    }

    cout << max_sum << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
