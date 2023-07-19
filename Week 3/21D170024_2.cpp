#include <bits/stdc++.h>
# define ll long long
#define endl '\n'
using namespace std;

int goodseq(vector<int> a, int n)
{
 int s=0;
 for(int i=0; i<n; i++)
  cin>>a[i];
for(int i=0;i<n;i++)
{
  if(a[i] <= i+1)
   s++;
 }
 if(s>0)
 return 1;
return 0;
}

string testcase( int t)
{
 int n,s;
 cin>>n;
 vector<int> a(n);
 s = goodseq(a,n);
 if (s==1)
 return "YES";
 return "NO";
}

int main()
{
    int t=1;
    cin>>t;
    while(t--) 
    cout<<testcase(t)<<endl;
   return 0; 
}