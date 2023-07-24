#include <iostream>
#include <time.h>

#include "Menu.h"

using namespace std;

int main(){
	srand(time(NULL));

	cout << "\tMineSweeper" << endl;

	char** MineField = NULL;
	char** PlayerField = NULL;

	int FlagInField = NULL;
	int PlayerRow = NULL, PlayerCol = NULL;
	int PlayerInstruments = NULL;
	int CountDestroyMines = NULL;
	char PreviousSymbol = NULL;

	char PatternNum[] = { "12345678" };

	int PlayerChoice = NULL;

	Menu(PlayerChoice, MineField, PlayerField, FlagInField, PlayerRow, PlayerCol, PlayerInstruments, CountDestroyMines, 
		PreviousSymbol, PatternNum);


	delete[] MineField;
	delete[] PlayerField;
}