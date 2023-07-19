#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,i,j,x,y;
cin>>n;
int a[n];
for(i=0;i<n;i++)
    cin>>a[i];
for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
      {
        x= a[i] & a[j];
        y= a[i] | a[j];
        if( ((x*x)+(y*y)) >((a[i]*a[i])+(a[j]*a[j])) )
        {
          a[i]=x;
          a[j]=y;
        }
        
      }
  }
  int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += pow(a[i], 2);
    }
    cout << sum;
    return 0;
}
