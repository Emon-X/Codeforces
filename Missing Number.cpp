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
    vector<ll>s;
    for(int i=0;i<n-1;i++)
    {
        ll x;
        cin>>x;
        s.pb(x);
    }
    sort(s.begin(),s.end());
    //for(auto u:s) cout<<u<<" ";cout<<endl;
    ll mex=1;
    for(int i=0;i<s.size();i++)
    {
        if(mex==s[i])
        {
            mex++;
        }
        else break;
    }
    cout<<mex<<endl;
    
    return 0;
}