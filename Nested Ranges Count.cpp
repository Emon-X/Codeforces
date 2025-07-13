#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

bool cmp(const pair<pair<int,int>,int>&a,const pair<pair<int,int>,int>&b)
{
    if(a.first.first==b.first.first)
        return a.first.second>b.first.second;
    return a.first.first<b.first.first;
}

void solve()
{
    int n;
    cin>>n;
    vector<pair<pair<int,int>,int>>v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({{x,y},i});
    }
    sort(v.begin(),v.end(),cmp);

    ordered_set<pair<int,int>>a,b;
    vector<int>s1(n),s2(n);
    for(int i=0,j=n-1;i<n;i++,j--)
    {
        s1[v[j].second]=a.order_of_key({v[j].first.second+1,-1});
        a.insert({v[j].first.second,i});
    }
    for(int i=0;i<n;i++)
    {
        s2[v[i].second]=i-b.order_of_key({v[i].first.second,-1});
        b.insert({v[i].first.second,i});
    }
    for(int i=0;i<n;i++) cout<<s1[i]<<' ';cout<<endl;
    for(int i=0;i<n;i++) cout<<s2[i]<<' ';cout<<endl;
}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
}
