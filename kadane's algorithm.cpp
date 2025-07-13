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
    for(int i=0;i<n;i++) cin>>s[i];
    ll ans=INT_MIN,sum=0;
    ll start=-1,end=-1;
    ll ansstart=-1,ansend=-1;
    for(int i=0;i<n;i++)
    {
        if(sum==0) start=i;
        sum+=s[i];
        if(sum>ans)
        {
            ans=sum;
            ansstart=start;
            ansend=i;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<ans<<endl;
    cout<<ansstart<<' '<<ansend<<endl;
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}