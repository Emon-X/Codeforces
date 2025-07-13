#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int x;
        cin >> x;
        int c = 0;
        int f = -1, last = -1;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (s[mid] == x)
            {
                f = mid;
                r = mid - 1;
            }
            else if (s[mid] < x)
            {
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        int l1 = -1, r1 = n - 1;
        while (l1 <= r1)
        {
            int mid = (l1 + r1) / 2;
            if (s[mid] == x)
            {
                last = mid;
                l1 = mid + 1;
            }
            else if (s[mid] < x)
            {
                l1 = mid + 1;
            }
            else
                r1 = mid - 1;
        }

        cout<<last-f+1<<endl;
    }
    return 0;
}