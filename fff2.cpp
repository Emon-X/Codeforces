#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define N 100000
int s[N+1];
int k;
int dp[N];

int func(int i)
{
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];

    int cost=INT_MAX;
    for(int j=1;j<=k;j++)
    {
        if(i-j>=0)
        cost=min(cost,func(i-j)+abs(s[i]-s[i-j]));
    }
    return dp[i]=cost;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>s[i];

    cout<<func(n-1)<<endl;
    
    return 0;
}