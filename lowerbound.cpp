#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define N 100000
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ll n;
    cin>>n;
    vector<ll>s(n+1);
    for(ll i=1;i<=n;i++)
    {
        cin>>s[i];
    }

    ll x;
    cin>>x;
    ll ans=n;
    //first occurence
    ll l=0,r=n-1;
    auto first=lower_bound(s.begin(),s.end(),x)-s.begin();
    auto last=upper_bound(s.begin(),s.end(),x)-s.begin();
    // ll l=0,r=n-1;
    // while(l<=r)
    // {
    //     ll mid=(l+r)/2;
    //     if(s[mid]>=x)
    //     {
    //         ans=mid;
    //         r=mid-1;
    //     }
    //     else l=mid+1;
    // }
    cout<< first<<' '<<last-1 <<endl;
    return 0;
}