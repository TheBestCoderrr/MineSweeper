#include <stdlib.h>

void GenerateMines(char** MineField, const int ROWS, const int COLS, const int COUNTMINES) {
	int x, y;
	for (int i = 0; i < COUNTMINES; i++) {
			x = rand() % (ROWS - 2) + 1;
			y = rand() % (COLS - 2) + 1;
			if (MineField[x][y] != '*')
				MineField[x][y] = '*';
			else
				i--;
	}
}

void GenerateNums(char** MineField, const int ROWS, const int COLS) {
	int CountMinesBetweenCell = 0;
	for (int i = 1; i < ROWS - 1; i++) {
		for (int j = 1; j < COLS - 1; j++) {
			if (MineField[i][j] == '*')
				continue;
			for (int n = -1; n < 2; n++) {
				for (int k = -1; k < 2; k++) {
					if (MineField[i + n][j + k] == '*')
						CountMinesBetweenCell++;
				}
			}
			MineField[i][j] = CountMinesBetweenCell + '0';
			if (MineField[i][j] == '0')
				MineField[i][j] = '.';
			CountMinesBetweenCell = 0;
		}
	}
}