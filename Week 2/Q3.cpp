#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k;
    cin>>n>>k;
    int a[n],b[n-1];
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n-1;i++)
      b[i]=a[i+1]-a[i];
    if(k>=n)
     cout<<b[k-2];
    else
    cout<<b[k-1];
}