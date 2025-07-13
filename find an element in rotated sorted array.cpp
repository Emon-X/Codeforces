#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007

ll firstsearch(vector<int>&s,ll l,ll r,ll x)
{
    int ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(s[mid]==x)
        {
            ans=mid;
            break;
        }
        else if(s[mid]<x)
        {
            l=mid+1;
        }
        else r=mid-1;
    }
    return ans;
}

void solve()
{
    int n;
    cin>>n;
    vector<int>s(n);
    for(int i=0;i<n;i++) cin>>s[i];
    int position=-1;
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(mid<r && s[mid+1]<s[mid])
        {
            position=mid+1;
            break;
        }
        else if(mid>l && s[mid]<s[mid-1])
        {
            position=mid;
            break;
        }
        if(s[r]>s[mid]) r=mid-1;
        else l=mid+1;
    }
    ll x;
    cin>>x;
    ll element_p=-1;
    element_p=firstsearch(s,0,position-1,x);
    if(element_p==-1)
    {
        ll ans=-1;
        ans=firstsearch(s,position,n-1,x);

        cout<<ans<<endl;
        return ;
    }
    cout<<element_p<<endl;
    return ;

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