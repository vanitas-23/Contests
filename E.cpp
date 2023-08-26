#include <bits/stdc++.h>
#define ll long long
using namespace std;
int md=1e9+7;
class QItem {
public:
    int row;
    int col;
    int dist;
    QItem(int x, int y, int w)
        : row(x), col(y), dist(w)
    {
    }
};
int minDistance(vector<vector<char>>& grid,int N,int M)
{
    QItem source(0, 0, 0);
    bool visited[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
        {
            if (grid[i][j] == '#' || grid[i][j]=='!' || grid[i][j]=='>' || grid[i][j]=='<' || grid[i][j]=='^' || grid[i][j]=='v')
                visited[i][j] = true;
            else
                visited[i][j] = false;
            if (grid[i][j] == 'S')
            {
               source.row = i;
               source.col = j;
            }
        }
    }
    queue<QItem> q;
    q.push(source);
    visited[source.row][source.col] = true;
    while (!q.empty()) {
        QItem p = q.front();
        q.pop();
        if (grid[p.row][p.col] == 'G')
            return p.dist;
        if (p.row - 1 >= 0 &&
            visited[p.row - 1][p.col] == false) {
            q.push(QItem(p.row - 1, p.col, p.dist + 1));
            visited[p.row - 1][p.col] = true;
        }
        if (p.row + 1 < N &&
            visited[p.row + 1][p.col] == false) {
            q.push(QItem(p.row + 1, p.col, p.dist + 1));
            visited[p.row + 1][p.col] = true;
        }
        if (p.col - 1 >= 0 &&
            visited[p.row][p.col - 1] == false) {
            q.push(QItem(p.row, p.col - 1, p.dist + 1));
            visited[p.row][p.col - 1] = true;
        }
        if (p.col + 1 < M &&
            visited[p.row][p.col + 1] == false) {
            q.push(QItem(p.row, p.col + 1, p.dist + 1));
            visited[p.row][p.col + 1] = true;
        }
    }
    return -1;
}
void change(int i,int j,int n,int m,vector<vector<char>>& grid,char c){

    if(c=='#')
    return ;
    if(c=='<'){
        for(int x=j-1;x>=0 && (grid[i][x]=='.' || grid[i][x]=='!');x--)
        grid[i][x]='!';
        return ;
    }
    if(c=='>'){
        for(int x=j+1; x<m &&( grid[i][x]=='.' || grid[i][x]=='!') ; x++)
        grid[i][x]='!';
        return ;
    }
    if(c=='^'){
        for(int x=i-1;x>=0 && (grid[x][j]=='.' || grid[x][j]=='!' ); x--)
        grid[x][j]='!';
        return ;
    }
    if(c=='v'){
       
        for(int x=i+1;x<n && (grid[x][j]=='.' || grid[x][j]=='!'); x++)
        grid[x][j]='!';
        return ;
    }
}
int main() {
int n,m;
cin>>n>>m;
vector<vector<char>>grid(n,vector<char>(m));
for(int i=0;i<n;i++)
for(int j=0;j<m;j++){
cin>>grid[i][j];
}
for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    if(grid[i][j]!='.')
    change(i,j,n,m,grid,grid[i][j]);
int ans=minDistance(grid,n,m);
cout<<ans;
return 0;
   }
