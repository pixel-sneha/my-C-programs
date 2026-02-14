#include<stdio.h>
#define MAX 100
int graph[MAX][MAX];
int visited[MAX], edges, vertices;

void bfs(int vertex){
    int queue[MAX], front = 0, rear = 0;
    visited[vertex] = 1;
    queue[rear++] = vertex; //incrementing rear, basically enqueueing the vertex into queue
    while(front<rear){
        int current = queue[front++];
        printf("%d ", current);
        for(int i = 0;i<vertices; i++){
            if(graph[current][i] == 1 && !visited[i]){
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
}
int main() {
    printf("Enter number of vertices: ");
    scanf("%d", &vertices);
    printf("Enter number of edges: ");
    scanf("%d", &edges);
    for(int i=0; i<edges; i++){
        int u, v;
        printf("Enter edge (u, v): ");
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    printf("BFS starting from vertex 0: ");
    bfs(0);
    return 0;
}
