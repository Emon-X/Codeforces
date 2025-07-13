#include<bits/stdc++.h>
using namespace std;

void primefact(int n)
{
    int ans=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ans++;
            while(n%i==0)
            {
                n/=i;
            }
        }
    }
    if(n>1) ans++;

    cout<<ans<<endl;
}

int main()
{
    int n;
    while( cin>>n)
    {
        if(n==0) break;
        cout<<n<<":"<<" ";
        primefact(n);
    }

    return 0;

}