#include <iostream>

using namespace std;

void InitMineField(char** MineField, const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		MineField[i] = new char[COLS];
		for (int j = 0; j < COLS; j++) {
			MineField[i][j] = '.';
		}
	}

	MineField[0][0] = char(218);
	MineField[0][COLS - 1] = char(191);
	MineField[ROWS - 1][0] = char(192);
	MineField[ROWS - 1][COLS - 1] = char(217);
	for (int i = 1; i < COLS - 1; i++) {
		MineField[0][i] = char(196);
		MineField[ROWS - 1][i] = char(196);
	}
	for (int i = 1; i < ROWS - 1; i++) {
		MineField[i][0] = char(179);
		MineField[i][COLS - 1] = char(179);
	}
}

void PrintMineField(char** MineField, const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << MineField[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
}