#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define N 100000
vector<ll>s(N);
ll dp[N];
ll lis(ll i)
{
    if(dp[i]!=-1) return dp[i];
    ll ans=1;
    for(int j=0;j<i;j++)
    {
        if(s[i]>s[j])
        ans=max(ans,lis(j)+1);
    }
    return dp[i]=ans;
}
void solve()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>s[i];

    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans=max(ans,lis(i));
    }
    cout<<ans<<endl;
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    memset(dp,-1,sizeof(dp));
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}