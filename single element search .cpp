#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define N 100000
int singleNonDuplicate(vector<int> &s)
{
    int n = s.size();
    if (n == 1)
        return s[0];
    if (s[0] != s[1])
        return s[0];
    if (s[n - 1] != s[n - 2])
        return s[n - 1];
    int l = 1, r = n - 2;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (s[m] != s[m - 1] && s[m] != s[m + 1])
            return s[m];
        else if ((m % 2 == 1 && s[m] == s[m - 1]) || (m % 2 == 0 && s[m] == s[m + 1]))
            l = m + 1;
        else
            r = m - 1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    vector<int>s(n);for(int i=0;i<n;i++) cin>>s[i];

    cout<<singleNonDuplicate(s)<<endl;
    return 0;
}