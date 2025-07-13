#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007

ll fact(ll n)
{
    ll ans=1;
    for(int i=2;i<=n;i++)
    {
        ans=(ans*i)%mod;
    }
    return ans%mod;
}

ll power(ll base,ll p)
{
    ll ans=1;
    while(p)
    {
        if(p%2==1)
        {
            ans=(ans*base)%mod;
            p--;
        }
        else{
            base=(base*base)%mod;
            p/=2;
        }
    }
    return ans%mod;
}

ll bionomial(ll n1,ll r1,ll k)
{
    ll ans=n1,ans1,ans2;
    ans1=power(r1,mod-2)%mod;
    ans2=power(k,mod-2)%mod;
    ans=(ans*ans1)%mod;
    ans=(ans*ans2)%mod;

    return ans%mod;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,r;
        cin>>n>>r;
        ll n1=fact(n);
        ll r1=fact(r);
        ll k=fact(n-r);

        ll ncr=bionomial(n1,r1,k);
        cout<<ncr<<endl;
    }
    return 0;
}