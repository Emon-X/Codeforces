#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007

void solve()
{
    ll n;
    cin>>n;
    vector<ll>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    ll x;
    cin>>x;
    ll l=0,r=n-1;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(s[mid]==x)
        {
            cout<<"FOUND"<<endl;
            return ;
        }
        if(l<=mid-1 && s[mid-1]==x)
        {
            cout<<"FOUND"<<endl;
            return ;
        }
        if(r>=mid+1 && s[mid+1]==x)
        {
            cout<<"FOUND"<<endl;
            return ;
        }
        if(s[mid]>x) r=mid-2;
        else l=mid+2;
    }

    cout<<"NOT FOUND"<<endl;
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