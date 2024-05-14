#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <sstream> 

using namespace std;

void bfs_shortest_path(vector<vector<int>>& graph, int n, int j) {
    vector<int> distance(n, -1); 
    queue<int> q;

    distance[j] = 0; 
    q.push(j);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (int i = 0; i < n; i++) { 
            if (graph[node][i] == 1 && distance[i] == -1) { // 如果鄰居節點尚未被訪問過
                //graph[node][i]=0
                //graph[i][node]=0
                //不太確定為啥不用歸0
                distance[i] = distance[node] + 1; // 更新最短路徑長度
                q.push(i);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if(distance[i]>2){
        	break;
        } 
        else{
            if(i==n-1 && distance[i]<=2){
            	cout << j+1 << endl;
            }
            
        }
        
    }
}

int main() {
    int n; // 節點數
    cin>>n;
    vector<vector<int>> graph(n, vector<int>(n));
    for(int i=0; i<n; i++){
    	for(int j=0; j<n; j++){
    		cin>>graph[i][j];
    	}
    }

    for(int i=0; i<n; i++){
        bfs_shortest_path(graph, n, i);
    }
    return 0;
}
