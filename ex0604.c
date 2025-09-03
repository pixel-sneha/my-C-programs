#include <stdio.h>

#define MAXN 100
#define MAXM 100

int N, M;
int grid[MAXN][MAXM];

int is_peak(int r, int c) {
    static const int dr[8] = {-1,-1,-1, 0, 0, 1, 1, 1};
    static const int dc[8] = {-1, 0, 1,-1, 1,-1, 0, 1};

    for (int k = 0; k < 8; k++) {
        int nr = r + dr[k];
        int nc = c + dc[k];
        if (nr >= 0 && nr < N && nc >= 0 && nc < M) {
            if (grid[r][c] <= grid[nr][nc]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &grid[i][j]);

    int pr[MAXN * MAXM], pc[MAXN * MAXM];
    int peak_count = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (is_peak(i, j)) {
                pr[peak_count] = i;
                pc[peak_count] = j;
                peak_count++;
            }
        }
    }

    printf("%d\n", peak_count);
    for (int k = 0; k < peak_count; k++) {
        printf("%d %d\n", pr[k], pc[k]);
    }

    return 0;
}
