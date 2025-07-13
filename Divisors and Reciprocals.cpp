#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007

ll power(ll base,ll p)
{
    ll ans=1;
    while(p)
    {
        if(p%2==1)
        {
            ans*=base;
            p--;
        }
        else{
            base*=base;
            p/=2;
        }
    }
    return ans;
}


ll prime_factor(ll n)
{
    ll ans=1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ll c=0;
            while(n%i==0)
            {
                c++;
                n/=i;
            }
            ans*=((power(i,c+1)-1)/(i-1));
        }
    }
    if(n>1) ans*=((power(n,2)-1)/(n-1));

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,a,b;
        cin>>x>>a>>b;
        ll n=x*b;
        if(n%x==0 && prime_factor(n/a)==x) cout<<n/a<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}