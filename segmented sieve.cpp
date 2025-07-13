#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
vector<ll>v;

void sieve(ll n)
{
    ll prime[n+1];
    memset(prime,0,sizeof(prime));
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=2*i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            v.push_back(i);
        }
    }
}

void solve(ll l, ll r)
{
    if(l==1) l++;
    ll mx=r-l+1;
    ll res[mx+1]={0};
   // for(int i=0;i<=mx;i++) res[i]=0;
    for(auto prime:v)
    {
        if(prime*prime<=r)
        {
            ll g=(l/prime)*prime;
            if(g<l) g+=prime;
            for(;g<=r;g+=prime)
            {
                if(g!=prime)
                {
                    res[g-l]=1;
                }
            }
        }
    }
    ll c=0;
    for(int i=0;i<mx;i++)
    {
        if(res[i]==0)
        {
            cout<<l+i<<endl;
        }
    }
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sieve(100000);
    ll t;
    cin>>t;
    while(t--)
    {
        ll l, r;
        cin>>l>>r;
        solve(l,r);
    }
    return 0;
}