#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define N 100000
vector<ll> mask, s;
ll n;

void dfs(int i)
{
    if(i==n)
    {
        for(auto u:mask)
        {
            cout<<u<<' ';
        }
        cout<<endl;
        return;
    }
    dfs(i+1);
    mask.pb(s[i]);
    dfs(i+1);
    mask.pop_back();

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    s.resize(n);
    for(int i=0;i<n;i++) cin>>s[i];

    dfs(0);
    return 0;
}