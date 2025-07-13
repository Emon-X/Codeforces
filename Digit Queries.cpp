#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll k;
    cin >> k;

    ll digit_length = 1;
    ll count = 9;
    ll start = 1;
    
    while (k > digit_length * count) {
        k -= digit_length * count;
        digit_length++;
        count *= 10;
        start *= 10;
    }
    cout<<k<<endl;
    cout<<endl;
    ll num = start + (k - 1) / digit_length;
    string s = to_string(num);
    cout<<s<<endl;
    cout<<endl;
    cout << s[(k - 1) % digit_length] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while (q--) {
        solve();
    }

    return 0;
}
