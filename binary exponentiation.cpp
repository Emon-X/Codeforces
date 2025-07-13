#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll base,power;
        cin>>base>>power;
        ll res=1;
        while(power)
        {
            if(power%2==1)
            {
            res*=base;
            power--;
            }
            else{
                base*=base;
                power/=2;
            }
            
        }

        cout<<res<<endl;
    }
    return 0;
}