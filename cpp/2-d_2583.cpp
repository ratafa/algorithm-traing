// 2-d 2583

#include <bits/stdc++.h>
using namespace std;

int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int n,m,num,ny,nx,x,y,t, adj[104][104], visitied[104][104];
vector<int> ret;
int dfs (int y, int x) {
    visitied[y][x] = 1;
    int ret = 1;
    for(int i=0; i<4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if(adj[ny][nx] == 1 || visitied[ny][nx] == 1) continue;
            ret += dfs(ny, nx); 
    }
    return ret;
}

int main () {
    cin >> n >> m >> num;
    for(int i=0; i<num; i++) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        for(int j= a; j<c; j++){
            for(int z= b; z<d; z++){
                adj[z][j] = 1;           
            }
        }
    }

    for(int i = 0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(adj[i][j] != 1 && visitied[i][j] == 0) {
            ret.push_back(dfs(i,j));
            }            
        }
    }
    sort(ret.begin(), ret.end());
    for(int a : ret) cout << a << " "; 
    return 0;
}