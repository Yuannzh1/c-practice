#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
struct node{
    int x, y;
    int dist;
};
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
bool isvalid(int x, int y, vector<vector<bool>>& visited, int wide, int height) {
    if (x >= 0 && x < wide && y >= 0 && y < height && !visited[x][y]) {
        return true;
    }
    return false;
}

int BFS(int wide, int height){
	
    vector<vector<bool>> visited(wide,vector<bool>(height, false));
    queue<node> q;
    q.push({0,0,0});
    cout<<"("<<0<<", " <<0<<"), "<<0<<endl;
    while(!q.empty()){
        node curr=q.front();
        q.pop();
        if(curr.x == wide && curr.y==height){
            return 0;
        }
        for(int i=0; i<4; i++){
            int NewX = curr.x + dx[i];
            int NewY = curr.y + dy[i];
            if(isvalid(NewX, NewY, visited, wide, height)){
            	visited[NewX][NewY] = true;
            	q.push({NewX, NewY, curr.dist+1});
            	cout<<"("<<NewX<<", " <<NewY<<"), "<<curr.dist+1<<endl;
        	}
        }
    } 
        

    return -1;
    
}
int main() {
    int n, m;
    cin>>n>>m;
    BFS(n, m);
   return 0;
}
