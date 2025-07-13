#include<bits/stdc++.h>
using namespace std;
int x=90000000;
 bool prime[90000001];
 vector<int>res;
int main()
{
    for(int i=2;i*i<=x;i++)
    {
        if(prime[i]==false)
        {
            for(int j=i*i;j<=x;j+=i)
            {
                prime[j]=true;
            }
        }
    }
    for(int i=2;i<=x;i++)
    {
        if(prime[i]==false)
        {
            res.push_back(i);
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
    cout<<res[n-1]<<endl;
    }
}