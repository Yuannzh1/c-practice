#include <iostream>
#include <vector>

using namespace std;

// 深度優先搜尋
void dfs(vector<vector<int>>& graph, int node, vector<bool>& visited) {
    if (!visited[node - 1]) {
        cout << node << endl;
        visited[node - 1] = true;
        for (size_t i = 0; i < graph[node - 1].size(); ++i) {
            if (graph[node - 1][i] == 1 && !visited[i]) {
                dfs(graph, i + 1, visited);
            }
        }
    }
}

// 主程式
int main() {
    int N;
    cin >> N;

    // 讀取圖型相鄰矩陣表示法
    vector<vector<int>> graph(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> graph[i][j];
        }
    }

    // 用來記錄節點是否已被訪問
    vector<bool> visited(N, false);

    // 從第一個節點開始DFS
    dfs(graph, 1, visited);

    return 0;
}
