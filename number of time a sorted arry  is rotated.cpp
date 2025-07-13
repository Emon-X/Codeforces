#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007

void solve()
{
    int n;
    cin>>n;
    vector<int>s(n);
    for(int i=0;i<n;i++) cin>>s[i];

    int ans=0;
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(r>mid && s[mid+1]<s[mid])
        {
            ans=mid+1;
            break;
        }
        else if(mid>l && s[mid]<s[mid-1])
        {
            ans=mid;
            break;
        }
        if(s[r]>s[mid]) r=mid-1;
        else l=mid+1;
    }

    cout<<ans<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}