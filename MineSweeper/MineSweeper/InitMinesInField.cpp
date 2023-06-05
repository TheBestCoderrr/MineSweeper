#include <stdlib.h>

bool PerevirkaNaPusteCell(char** MineField, const int x, const int y) {
	for (int i = -1; i < 2; i++) {
		for (int j = -1; j < 2; j++) {
			if (i == 0 && j == 0)
				continue;
			if (MineField[x + i][y + j] == '*') {
				return false;
			}
		}
	}
	return true;
}

void InitMines(char** MineField, const int ROWS, const int COLS, const int COUNTMINES) {
	int x, y;
	for (int i = 0; i < COUNTMINES; i++) {
			x = rand() % (ROWS - 2) + 1;
			y = rand() % (COLS - 2) + 1;
			if (MineField[x][y] != '*' && PerevirkaNaPusteCell(MineField, x, y) == true)
				MineField[x][y] = '*';
			else
				i--;
	}
}