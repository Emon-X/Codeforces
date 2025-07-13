#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define pp pop_back()
#define mod 1000000007
#define N 100005
 // Directions for moving up, down, left, right, and diagonally
ll dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
ll dy[] = {0, 0, 1, -1, 1, -1, 1, -1};
 
void solve()
{
    ll n;
    cin>>n;
    set<ll>st;
    ll x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        st.insert(x);
    }
    cout<<st.size()<<endl;
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