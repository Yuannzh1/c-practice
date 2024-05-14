#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define MAX_N 1000

vector<int> adj[MAX_N]; // 相鄰串列
bool visited[MAX_N] = {false}; // 初始化 visited，所有節點都尚未被訪問
int value[MAX_N]; // 每個節點的值

int BFS_with_node_value(int start) {
    queue<int> q; // 創建一個 queue 用來存儲待處理的節點
    q.push(start); // 將起始節點 start 推入 queue
    visited[start] = true; // 將起始節點設為已訪問
    int total_value = 0; // 初始化節點值的總和為 0

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        // 將當前節點的值加到總和中
        total_value += value[v];
        // 遍歷與當前節點相鄰的節點
        for (int i : adj[v]) {
            if (!visited[i]) {
                visited[i] = true; // 標記節點 i 已訪問
                q.push(i); // 將 i 設置為新頂點
            }
        }
    }
    return total_value;
}

int main() {
    // 假設有 m 條邊
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int v, w;
        cin >> v >> w;
        adj[v].push_back(w); // 將邊加入相鄰串列
        adj[w].push_back(v); // 若圖是無向圖，需將兩個方向都加入
    }

    // 假設每個節點的值分別為 1、2、3、4、5
    for (int i = 1; i <= 5; i++) {
        cin >> value[i];
    }

    // 假設起始節點是 1
    int start_node = 1;

    int total_node_value = BFS_with_node_value(start_node); // 執行 BFS，計算節點值的總和
    cout << "Total value of nodes visited: " << total_node_value << endl;

    return 0;
}
