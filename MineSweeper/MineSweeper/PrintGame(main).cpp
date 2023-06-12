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
	char** PlayerField = new char*[ROWS];

	int FlagInField = NULL;
	int PlayerRow = NULL, PlayerCol = NULL;
	int PlayerInstruments = NULL;
	int CountDestroyMines = NULL;
	char PreviousSymbol = NULL;

	char PatternNum[] = { "12345678" };

	int PlayerChoice = NULL;

	Menu(PlayerChoice, MineField, PlayerField, ROWS, COLS, COUNTMINES, FlagInField, PlayerRow, PlayerCol, PlayerInstruments, CountDestroyMines, 
		PreviousSymbol, PatternNum);


	delete[] MineField;
	delete[] PlayerField;
}