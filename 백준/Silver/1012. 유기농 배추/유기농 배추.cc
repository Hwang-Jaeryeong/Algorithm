#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

#define endl '\n'

#define X first
#define Y second

int field[52][52];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1}; // 상하좌우
bool vis[52][52];
int n, m, k;
queue <pair<int, int>> q;

void bfs(int x, int y){
    vis[x][y] = 1;
    q.push( {x, y} );
    while(!q.empty()){
        auto cur = q.front(); q.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(vis[nx][ny] || field[nx][ny] != 1) continue;
            vis[nx][ny] = 1;
            q.push({nx, ny});
        }
    }
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t; cin >> t;
  while(t--){
    cin >> m >> n >> k;
    int x, y;
    for(int i = 0; i < k; i++){
        cin >> x >> y;
        field[y][x] = 1;
    }
    int worm = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(field[i][j] == 1 && !vis[i][j]){
                bfs(i, j);
                worm++;
            }
        }
    }
    cout << worm << endl;
    for(int i = 0; i < n; i++){
        fill(field[i], field[i]+m, 0);
        fill(vis[i], vis[i]+m, false);
    }
  }
  return 0;
}