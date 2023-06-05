#include <iostream>
#include <time.h>

#include "InitPrintMineField.h"
#include "GenerateMinesInField.h"

using namespace std;

#define ROWS 10
#define COLS 12
#define COUNTMINES 10

int main(){
	srand(time(NULL));

	cout << "\tMineSweeper" << endl;

	char** MineField = new char*[ROWS];

	InitMineField(MineField, ROWS, COLS);
	GenerateMines(MineField, ROWS, COLS, COUNTMINES);
	PrintMineField(MineField, ROWS, COLS);


	delete[] MineField;
}