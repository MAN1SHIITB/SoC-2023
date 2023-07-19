#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int n,m,sl,el;
vector<vector<int>> g;
vector<int> vs;
vector<int> pa;

bool dfs(int u, int p)
{
    vs[u]=true;
    pa[u]=p;
    for(auto v:g[u])
    {
        if(v==p)continue;
        if(vs[v])
        {
            sl=v;
            el=u;
            return true;
        }
        if(!vs[v])
            if(dfs(v,u))
                return true;
    }
    return false;
}

bool visitall()
{
    for(int i=1;i<=n;++i)
    {
        if(!vs[i])
            if(dfs(i,-1)) 
                return true;
    }
    return false;
}

int main()
{
 cin>>n>>m;
 g.resize(n+1);
 vs.resize(n+1);
 pa.resize(n+1);
 for(int i=0; i<m; ++i)
 {
    int u,v;
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
 }
 if(!visitall())
 {
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
 }
 int tl=el;
 vector<int> ans;
 ans.push_back(el);
 while (tl != sl)
 {
    ans.push_back(pa[tl]);
    tl=pa[tl];
 }
 ans.push_back(el);
 cout<<ans.size()<<endl;
 for(auto c:ans)
 {
    cout<<c<<" ";
 }
 
}