#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t=1;
    while(t--)
    {
        string s;
        cin>>s;
        char a;
        cin>>a;

        sort(s.begin(),s.end());
        ll l=0,r=s.size();
        char ans;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            if(s[mid]>a)
            {
                ans=s[mid];
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}