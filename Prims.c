//Prim's algorithm in C
#include<stdio.h>
#define MAX 50
int G[MAX][MAX], visited[MAX], n;

void prims(){
    int min, a, b;
    for(int i=0; i<n; i++){
        visited[i] = 0;
    }
    visited[0] = 1; // cuz starting from 0 index
    for(int i=0; i<n-1; i++){
        min = 99;
        for(int j=0; j<n; j++){
            if(visited[j]){
                for(int k=0; k<n; k++){
                    if(!visited[k] && G[j][k]){
                        if(min > G[j][k]){
                            min = G[j][k];
                            a = j;
                            b = k;
                            visited[b] = 1;
                            
                        }

                    }

                }
            }

        }
    } 
}

int main(){
    int n;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &G[i][j]);
        }
    }
    prims();
    return 0;
}