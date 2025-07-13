#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define N 100000

void find(int x,string &s)
{
    if(x<=1) 
    {
        s+=(x+'0');
    }
    else {
        find(x/2,s);
        if(x%2) s+='1';
        else s+='0';
    }
}

void solve()
{
    ll n;
    cin>>n;
    string binary="";
    find(n,binary);
    cout<<binary<<endl;
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