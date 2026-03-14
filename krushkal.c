//Krushkal's algorithm 
#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int parent[MAX];
struct edge{
    int u,v,w;
} e[MAX];

int n,e_count;

int find_parent(int vertex){
    if(parent[vertex] == vertex)
        return vertex;
        return find_parent(parent[vertex]);
}

void krushkal(){
    int edges_count=0,sum=0;
    while(edges_count < n-1){
        int min = 9999, min_index = -1;
        for(int i=0; i<e_count; i++){
            if(e[i].w < min){
                min = e[i].w;
                min_index = i;
            }
        }
        int u = e[min_index].u;
        int v = e[min_index].v;
        int w = e[min_index].w;
        int parent_u = find_parent(u);
        int parent_v = find_parent(v);
        if(parent_u != parent_v){
            printf("Edge (%d,%d) with weight %d\n", u,v,w);
            parent[parent_v] = parent_u;
            sum += w;
            edges_count++;
    }
    e[min_index].w = 9999;
    printf("Total weight of MST: %d\n", sum);
    }
}

int main(){
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter number of edges: ");
    scanf("%d", &e_count);
    printf("To find minimum spanning tree, enter start and end vertices(integers only) of an edge and its weight \n");
    for(int i=0; i<e_count;i++){
        printf("Enter edge (u v w): ");
        scanf("%d %d %d", &e[i].u, &e[i].v, &e[i].w);
        parent[i] = i;
    }
    krushkal();
    return 0;
}
