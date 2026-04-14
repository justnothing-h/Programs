#include <iostream>
#include <queue>
using namespace std;

void BFS(int graph[5][5], int start, int visited[]) {
    queue<int> q;

    visited[start] = 1;
    q.push(start);

    while(!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for(int i = 0; i < 5; i++) {
            if(graph[node][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}

int main() {
    int graph[5][5] = {
        {0,1,1,0,0},
        {1,0,0,1,1},
        {1,0,0,0,0},
        {0,1,0,0,0},
        {0,1,0,0,0}
    };

    

    int visited[5] = {0};

    BFS(graph, 0, visited);

    return 0;
}