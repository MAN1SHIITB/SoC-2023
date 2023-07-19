#include <bits/stdc++.h>
using namespace std;
int main()
{
 int i,j,n,p=0,k;
 cin>>n>>k;
 int a[n];
 for (i=0;i<n;i++)
 cin>>a[i];
 for(i=0;p<k;i++)
 {
  p=0;
  for(j=0;j<n;j++)
  {
   p=p+i/a[j];
  }
 }
 cout<<i-1; 
}                                                                                                     