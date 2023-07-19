#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    int maxv=0;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        maxv=max(maxv,a[i]);
    }
    ll low = maxv;
    ll hi=1e18;
    ll maxs=1e18;
    while(low<=hi)
    {
        ll mid=(low+hi)/2;
        int blocks=1;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            if((sum + a[i])>mid)
            {
                sum=0;
                blocks++;
            }
            sum = sum+ a[i];
        }
        if(blocks>k)
         low=mid+1;
        else
        {
            if(mid<maxs)
             maxs=mid;
            hi=mid-1;
        }
    }
    cout<<maxs;
}