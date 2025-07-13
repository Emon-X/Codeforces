#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define N 100000
int roseGarden(vector<int> s, int k, int m)
{
	int n=s.size();
	int mn=9999999,mx=-9999999;
	for(int i=0;i<n;i++)
	{
		mn=min(mn,s[i]);
		mx=max(mx,s[i]);
	}
	int l=mn,r=mx;
	int ans=-1;
	while(l<=r)
	{
		int mid=(l+r)/2;
		int c=0,cnt=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]<=mid)
			{
				c++;
			}
			else {
				cnt+=(c/k);
				c=0;
			}
		}
		cnt+=(c/k);
		if(cnt>=m)
		{
			ans=mid;
			r=mid-1;
		}
		else l=mid+1;
	}
	return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ll n;
    cin>>n;
    vector<int>s(n);
    for(int i=0;i<n;i++) cin>>s[i];

    ll k,m;
    cin>>k>>m;

    
    cout<<roseGarden(s,k,m)<<endl;
    return 0;
}