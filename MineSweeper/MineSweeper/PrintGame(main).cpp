#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "InitPrintMineField.h"

using namespace std;

#define ROWS 10
#define COLS 12

int main(){
	srand(time(NULL));

	cout << "\tMineSweeper" << endl;

	char** MineField = new char*[ROWS];

	InitMineField(MineField, ROWS, COLS);
	PrintMineField(MineField, ROWS, COLS);

	delete[] MineField;
}