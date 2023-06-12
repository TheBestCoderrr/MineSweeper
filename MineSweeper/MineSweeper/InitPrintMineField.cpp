#include <iostream>

using namespace std;

void InitField(char** Field, const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		Field[i] = new char[COLS];
		for (int j = 0; j < COLS; j++) {
			Field[i][j] = '.';
		}
	}

	Field[0][0] = char(218);
	Field[0][COLS - 1] = char(191);
	Field[ROWS - 1][0] = char(192);
	Field[ROWS - 1][COLS - 1] = char(217);
	for (int i = 1; i < COLS - 1; i++) {
		Field[0][i] = char(196);
		Field[ROWS - 1][i] = char(196);
	}
	for (int i = 1; i < ROWS - 1; i++) {
		Field[i][0] = char(179);
		Field[i][COLS - 1] = char(179);
	}
}

void PrintField(char** Field, const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << Field[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
}