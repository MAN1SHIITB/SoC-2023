#include <bits/stdc++.h>
# define ll long long
#define endl '\n'
using namespace std;
void testcase()
{
 int n,k;
 cin>>n>>k;
vector<pair<int,int>> a(n),b(n);
 for(int i=0;i<n; i++)
 {
    cin>>a[i].first;
    a[i].second=i;
 }
  for(int i=0;i<n; i++)
 {
    cin>>b[i].first;
    b[i].second=i;
 }
 sort(a.begin(),a.end());
 sort(b.begin(),b.end());
 vector<int> ans(n);
 for(int i=0;i<n;i++)
 ans[a[i].second] = b[i].first;
for(int i=0; i<n;  i++)
   cout<<ans[i]<<" ";
  cout<<endl; 
} 
int main()
{
    int t;
    cin>>t;
    while (t--)
    testcase();
    cout<<flush;
    return 0;
}