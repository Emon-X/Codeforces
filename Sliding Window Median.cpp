#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define pp pop_back()
#define mod 1000000007
#define ha cout<<"YES"<<endl;
#define na cout<<"NO"<<endl;
#define N 100005
ll dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
ll dy[] = {0, 0, 1, -1, 1, -1, 1, -1};
 
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>s(n);
    multiset<ll>m;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(m.size()<3) m.insert(s[i]);
    }
    ll x=(k+1)/2;
    auto it=m.begin()+x;
    cout<<*it<<endl;
    // for(int i=0,j=3;j<n;j++,i++)
    // {

    // }
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