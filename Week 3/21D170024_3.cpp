#include <bits/stdc++.h>
typedef long long ll;
#define ln '\n'
using namespace std;
const int mod=1000000007;

int main()
{
    int n,s=0,x;
    cin>>n>>x;
    vector<int> a(n);
    int dp[n+1][x+1];
    for(int i=0;i<n;i++)
     cin>>a[i];
    vector<ll> noc(x+1,0); 
    noc[0]=1;
    for(int val=1; val<=x;val++)
     for(int j=0;j<n;j++)
        if (val-a[j]>=0)
        noc[val] = (noc[val]+noc[val-a[j]])%mod;
    cout<<noc[x]; 
        return 0;
}


