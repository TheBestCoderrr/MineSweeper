#include <iostream>
#include <time.h>

#include "Menu.h"

using namespace std;

#define ROWS 10
#define COLS 12
#define COUNTMINES 10

int main(){
	srand(time(NULL));

	cout << "\tMineSweeper" << endl;

	char** MineField = new char*[ROWS];

	StartGame(MineField, ROWS, COLS, COUNTMINES);


	delete[] MineField;
}