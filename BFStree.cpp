#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <sstream> 

using namespace std;

void bfs_shortest_path(vector<vector<int>>& graph, int start) {
    int n = graph.size();
    vector<int> distance(n, INT_MAX); // 用來儲存起點到每個節點的最短路徑長度
    queue<int> q;

    distance[start] = 0; // 起點到自己的距離為0
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (size_t i = 0; i < graph[node].size(); i++) { 
            int neighbor = graph[node][i]; // 取得鄰居節點
            if (distance[neighbor] == INT_MAX) { // 如果鄰居節點尚未被訪問過
                distance[neighbor] = distance[node] + 1; // 更新最短路徑長度
                q.push(neighbor);
            }
        }
    }

    // 輸出最短路徑長度
    cout << "Shortest path from node " << start << ":\n";
    for (int i = 0; i < n; ++i) {
        cout << "To node " << i << ": " << distance[i] << endl;
    }
}

int main() {
    int n = 6; // 節點數
    vector<vector<int>> graph(n);

    // 逐行讀取鄰接節點
    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);

        stringstream ss(line); // 修改這行
        int node;
        while (ss >> node) {
            graph[i].push_back(node);
        }
    }

    bfs_shortest_path(graph, 1);

    return 0;
}
