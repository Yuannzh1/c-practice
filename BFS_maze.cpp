#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// 定義迷宮的大小
const int ROW = 5;
const int COL = 5;

// 定義節點結構
struct Node {
    int x, y; // 代表節點的座標
    int dist; // 起點到該節點的距離
};

// 定義四個可能的移動方向
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

// 函數用於檢查節點是否在迷宮內並且是否可通行
bool isValid(int x, int y, vector<vector<int>>& maze) {
    return x >= 0 && x < ROW && y >= 0 && y < COL && maze[x][y] == 0;
}

// BFS 函數用於尋找出口
int BFS(vector<vector<int>>& maze, int startX, int startY, int endX, int endY) {
    // 用於標記節點是否已被訪問過
    vector<vector<bool>> visited(ROW, vector<bool>(COL, false));

    // 創建一個佇列，用於 BFS
    queue<Node> q;

    // 將起點加入佇列
    q.push({startX, startY, 0});
    visited[startX][startY] = true;

    // 開始 BFS
    while (!q.empty()) {
        // 取出佇列的頂部節點
        Node curr = q.front();
        q.pop();

        // 如果到達出口，返回距離
        if (curr.x == endX && curr.y == endY)
            return curr.dist;

        // 嘗試向四個方向移動
        for (int i = 0; i < 4; i++) {
            int newX = curr.x + dx[i];
            int newY = curr.y + dy[i];

            // 檢查新位置是否有效
            if (isValid(newX, newY, maze) && !visited[newX][newY]) {
                // 標記新位置已被訪問
                visited[newX][newY] = true;

                // 將新位置加入佇列
                q.push({newX, newY, curr.dist + 1});
            }
        }
    }

    // 如果無法找到出口，返回 -1
    return -1;
}

int main() {
    vector<vector<int>> maze = {
        {0, 1, 0, 0, 0},
        {0, 1, 0, 1, 0},
        {0, 0, 0, 1, 0},
        {1, 1, 1, 1, 0},
        {0, 0, 0, 0, 0}
    };

    int startX = 0, startY = 0;
    int endX = 4, endY = 4;

    int shortestDistance = BFS(maze, startX, startY, endX, endY);

    if (shortestDistance != -1)
        cout << "最短路徑長度是: " << shortestDistance << endl;
    else
        cout << "無法找到出口!" << endl;

    return 0;
}
