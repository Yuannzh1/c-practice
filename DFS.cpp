//DFS實作
void dfs(int x, int y)
{
int i, skip = 0;
int nextX, nextY;
  if (x < 0 || y < 0 || x >= WIDTH || y >= HEIGHT || visit[x][y] == 1) {
    return;
  }
visit[x][y] = 1;
printf("visit: %d, %d\n", x, y);
  for (i=0; i<DIRECTIONS; i++) {
  nextX = x + dir[i][0];
  nextY = y + dir[i][1];
  dfs(nextX, nextY);
  }
}
dir[4][2] ={{0,1},{1,0},{0,-1},{-1,0}};

