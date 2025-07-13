#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define N 100000
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    string s;
    cin>>s;

    ll ans=0;
    ll cnt=1;
    char pre=s[0];
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==pre)
        {
            cnt++;
        }
        else{
            pre=s[i];
            ans=max(ans,cnt);
            cnt=1;
        }
    }
    ans=max(ans,cnt);
    cout<<ans<<endl;
    
    return 0;
}