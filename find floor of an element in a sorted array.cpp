#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007

void floor()
{
    int n;
    cin>>n;
    vector<int>s(n);
    for(int i=0;i<n;i++) cin>>s[i];
    int ans=-1;
    int l=0,r=n-1;
    int x;
    cin>>x;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(s[mid]==x) 
        {
            ans=x;
            break;
        }
        // if(s[mid]>x) //for imediate big value
        // {
        //     ans=s[mid];
        //     r=mid-1;
        // }
        // else {
        //     l=mid+1;
        // }
        if(s[mid]<x) // for imediate junior small value
        {
            ans=s[mid];
            l=mid+1;
        }
        else {
            r=mid-1;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t=1;
    while(t--)
    {
        floor();
    }
    return 0;
}   