#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define pp pop_back()
#define mod 1000000007
#define N 100005
ll dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
ll dy[] = {0, 0, 1, -1, 1, -1, 1, -1};
 
void solve()
{
    ll n;
    cin>>n;
    vector<pair<pair<ll,ll>,ll>>v(n);
    ll x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        v[i].first.first=x;
        v[i].first.second=y;
        v[i].second=i;
    }
    ll res[n];
    sort(all(v));
    ll last_room=0;
    priority_queue<pair<ll,ll>>p;
    for(int i=0;i<n;i++)
    {
        if(p.empty())
        {
            last_room++;
            res[v[i].second]=last_room;
            p.push({-v[i].first.second,last_room});
        }
        else{
            pair<ll,ll>m=p.top();
            if((-m.first)<v[i].first.first)
            {
                p.pop();
                p.push({-v[i].first.second,m.second});
                res[v[i].second]=m.second;
            }
            else{
                last_room++;
                res[v[i].second]=last_room;
                p.push({-v[i].first.second,last_room});
            }
        }
    }
    cout<<last_room<<endl;
    for(auto u:res) cout<<u<<' ';cout<<endl;
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