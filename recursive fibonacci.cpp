#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
 
ll arr[5000];

ll fibonacci(ll n)
{
    if(n==0 || n==1) return 1;
    else if(arr[n]==0)
    arr[n]=fibonacci(n-1)+fibonacci(n-2);

    return arr[n];
}

void solve()
{
    ll n;
    cin>>n;
    cout<<fibonacci(n-1)<<endl;
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