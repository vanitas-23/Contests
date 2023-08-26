#include <bits/stdc++.h>
#define ll long long
using namespace std;
int md=1e9+7;
map<pair<int,int>,int>pr;
 int dfs(int i,vector<int>adj[],vector<int>& vis){
    vis[i]=1;
    int ans=0;
    for(int l:adj[i]){
        if(!vis[l])
        ans=max(ans,pr[{l,i}]+dfs(l,adj,vis));
    }
    vis[i]=0;
    return ans;
 }

int main() {
int n,m;
cin>>n>>m;
vector<vector<int>>arr(m,vector<int>(3));
vector<int>adj[n+1];
for(int i=0;i<m;i++)
for(int j=0;j<3;j++)
    cin>>arr[i][j];
for(int i=0;i<m;i++)
{
    adj[arr[i][0]].push_back(arr[i][1]);
    adj[arr[i][1]].push_back(arr[i][0]);
    pr[{arr[i][0],arr[i][1]}]=arr[i][2];
    pr[{arr[i][1],arr[i][0]}]=arr[i][2];
}
int ans=0;
for(int i=1;i<=n;i++){
    vector<int>vis(n+1,0);
    ans=max(ans,dfs(i,adj,vis));
}
cout<<ans;
return 0;
   }
