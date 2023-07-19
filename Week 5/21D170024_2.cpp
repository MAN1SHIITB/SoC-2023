#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7,inf = 1e18;
#define pb push_back
int main()
{
    int t;
    cin>>t;
    while (t--){
        ll n,m,k;
        cin>>n>>m>>k;
        k -= 2;
        if (m < n - 1)
            cout<<"NO"<<'\n';
        else if (m > n * (n - 1)/2)
            cout<<"NO"<<'\n';
        else if (k <= -1)
            cout<<"NO"<<'\n';
        else if (k == 0){
            if (n == 1)
                cout<<"YES"<<'\n';
            else 
                cout<<"NO"<<'\n';
        }
        else if (k == 1){
            if (m == n * (n - 1) / 2)
                cout<<"YES"<<'\n';
        
            else 
                cout<<"NO"<<'\n';
        }
        
        else 
            cout<<"YES"<<'\n';
    }
    return 0;
}