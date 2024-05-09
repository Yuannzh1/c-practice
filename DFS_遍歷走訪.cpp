#include <bits/stdc++.h>
using namespace std;

struct node {
    int x, y;
    int dist;
};

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

bool isvalid(int x, int y, vector<vector<bool>>& visited, int wide, int height) {
    if (x >= 0 && x < wide && y >= 0 && y < height && !visited[x][y]) {
        return true;
    }
    return false;
}

void DFS(int x, int y, int dist, int wide, int height, vector<vector<bool>>& visited) {
    cout << "(" << x << ", " << y << "), " << dist << endl;
    visited[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        if (isvalid(newX, newY, visited, wide, height)) {
            DFS(newX, newY, dist + 1, wide, height, visited);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    DFS(0, 0, 0, n, m, visited);
    return 0;
}
