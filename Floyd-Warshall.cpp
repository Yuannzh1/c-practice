#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int main() {
    int n, v1, v2;
    cin>>n>>v1>>v2;
    long long graph[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>graph[i][j];
        }
    }
    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j || i==k || j==k) continue;
                if(graph[i][k]!=99999 && graph[k][j]!=99999 && graph[i][j]>graph[i][k]+graph[k][j]){
                    graph[i][j] = graph[i][k]+graph[k][j];
                }
            }
        }
        cout<<"-"<<k+1<<"-"<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<graph[i][j]<<" ";
            }cout<<endl;
        }
    }
    
   return 0;
}
