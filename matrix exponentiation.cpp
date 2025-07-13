#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define N=101
ll a[101][101],res[101][101];
#define mod 1000000007;

void mul(ll a[][101],ll b[][101],ll n)
{
    ll r[n+1][n+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            r[i][j]=0;
            for(int k=0;k<n;k++)
            {
                ll x=(a[i][k]*b[k][j])%mod;
                r[i][j]=(r[i][j]+x)%mod;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=r[i][j];
        }
    }
}

void power(ll a[][101],ll n,ll p)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                res[i][j]=1;
            }
            else res[i][j]=0;
        }
    }
    while(p)
    {
        if(p%2==1)
        {
            mul(res,a,n);
            p--;
        }
        else{
            mul(a,a,n);
            p/=2;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=res[i][j];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,p;
        cin>>n>>p;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        power(a,n,p);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}