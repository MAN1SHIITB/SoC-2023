#include<bits/stdc++.h>
using namespace std;
const int mx=100001;
bool vis[mx];
vector<int>a[mx];
int n;
bool star()
{
    bool answer;
    int s1=0;
    int otr=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i].size()==1)
            s1++;
        else if(a[i].size()==n-1)
            otr++;
    }
    if(otr==1 && s1==n-1)
        answer=true;
    else
        answer=false;
    return answer;
}

bool ring()
{
    bool answer=true;
    for(int i=1;i<=n;i++)
        if(a[i].size()!=2)
        {
            answer=false;
            break;
        }
    return answer;
}

bool bus()
{
    bool answer;
    int one=0;
    int two=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i].size()==1)
            one++;
        else if(a[i].size()==2)
            two++;
    }
    if(one==2 && two==n-2)
        answer=true;
    else
        answer=false;
    return answer;
}

int main()
{
    int m,k,u,v;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    if(star())
        cout<<"star topology"<<endl;
    else if(bus())
        cout<<"bus topology"<<endl;
    else if(ring())
        cout<<"ring topology"<<endl;
    else
        cout<<"unknown topology"<<endl;
}