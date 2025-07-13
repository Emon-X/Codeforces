#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define pp pop_back()
#define mod 1000000007
#define ha cout<<"YES"<<endl
#define na cout<<"NO"<<endl
#define N 100005
ll dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
ll dy[] = {0, 0, 1, -1, 1, -1, 1, -1};
ll n,k;
vector<ll>s;

bool good(ll m)
{
    ll blocks=1;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+s[i]>m)
        {
            sum=0;
            blocks++;
        }
        sum+=s[i];
    }
    return blocks<=k;
}

void solve()
{
    cin>>n>>k;
    s.resize(n);
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        mx=max(mx,s[i]);
    }
    ll l=mx,r=1e18;
    ll ans;
    while(l<=r)
    {
        ll m=l+(r-l)/2;
        if(good(m))
        {
            ans=m;
            r=m-1;
        }
        else l=m+1;
    }
    cout<<ans<<endl;
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}