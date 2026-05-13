#include <stdio.h>

int dx[] = {-1, 0, 1, 0, 1, -1, -1, 1};
int dy[] = {0, -1, 0, 1, 1, 1, -1, -1};


void dfs(char** grid, int r, int c, int n, int m) {
    // Check bounds
    if (r < 0 || c < 0 || r >= n || c >= m || grid[r][c] != '1')
        return;

    // Mark cell as visited
    grid[r][c] = '0';

    // Explore all 8 directions
    for (int i = 0; i < 8; i++) {
        int newR = r + dx[i];
        int newC = c + dy[i];
        dfs(grid, newR, newC, n, m);
    }
}

int countIslands(char** grid, int n, int m) {
    int count = 0;

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            if (grid[r][c] == '1') {
                count++;
                dfs(grid, r, c, n, m);
            }
        }
    }

    return count;
}


int main(){
    int M,N;
    char grid;
    
    scanf("%d %d", &M, &N);


    countIslands(grid,M,N);
        printf("ISLANDS %d" , countIslands);
        printf("LARGEST %d" );

        return 0;


}
