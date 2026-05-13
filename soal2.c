//Praktikum EL2008 PMP
//MODUL : 05
//Nama : Andreas Nainggolan
//NIM : 13224092
//file : soal2.c
//deskrpsi : menghitung jumlah pulau dan pulau terbesar.

#include <stdio.h>
#include <stdlib.h>

int dx[] = {-1, 0, 1, 0, 1, -1, -1, 1};
int dy[] = {0, -1, 0, 1, 1, 1, -1, -1};

// Perform DFS to mark all connected 'L' as visited
void dfs(char** grid, int r, int c, int n, int m) {
	// Check bounds
	if (r < 0 || c < 0 || r >= n || c >= m || grid[r][c] != 'L')
		return;
	
	// Mark cell as visited
	grid[r][c] = 'W';
	
	// Explore all 8 directions
	for (int i = 0; i < 8; i++) {
		int newR = r + dx[i];
		int newC = c + dy[i];
		dfs(grid, newR, newC, n, m);
	}
}

// Count the number of islands
int countIslands(char** grid, int n, int m) {
	int count = 0;
	
	for (int r = 0; r < n; r++) {
		for (int c = 0; c < m; c++) {
			if (grid[r][c] == 'L') {
				count++;
				dfs(grid, r, c, n, m);
			}
		}
	}
	
	return count;
}

int main(){
    int i,j,r,c;
    char grid;

    scanf("%d %d", &M, &N);

    countIslands(grid,M,N);

        printf("ISLANDS 0\n");
        printf("LARGEST 0" );

        return 0;


}
