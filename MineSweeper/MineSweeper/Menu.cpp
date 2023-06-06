#include <iostream>


#include "InitPrintMineField.h"
#include "GenerateMinesInField.h"
#include "InstrumentFlag.h"

using namespace std;



void StartGame(char** MineField, const int ROWS, const int COLS, const int COUNTMINES) {
	int FlagInField = 1;
	int PlayerRow, PlayerCol;
	int PlayerInstruments = 1;
	int CountDestroyMines = 0;
	char PreviousSymbol = NULL;

	InitMineField(MineField, ROWS, COLS);
	GenerateMines(MineField, ROWS, COLS, COUNTMINES);
	PrintMineField(MineField, ROWS, COLS);

	while (true) {
		cout << "Enter your choice: ";
		cin >> PlayerRow;
		if (PlayerRow == 0) {
			cout << "Game Over!" << endl;
			break;
		}
		else if (PlayerRow == -1) {
			cout << "Instrument" << endl;
			PlayerInstruments++;
		}
		else if (PlayerRow >= 1 && PlayerRow <= ROWS - 1) {

			cin >> PlayerCol;

			if (MineField[PlayerRow][PlayerCol] == 'F') {
				DeleteFlag(MineField, PlayerRow, PlayerCol, PreviousSymbol);
				FlagInField--;
				PrintMineField(MineField, ROWS, COLS);
				continue;
			}


			if (PlayerInstruments % 2 == 0 && FlagInField <= COUNTMINES) {
				if (IfDestroyMine(MineField, PlayerRow, PlayerCol))
					CountDestroyMines++;
				PreviousSymbol = MineField[PlayerRow][PlayerCol];
				SetFlag(MineField, PlayerRow, PlayerCol);
				FlagInField++;
				PrintMineField(MineField, ROWS, COLS);
			}
			else if (FlagInField > COUNTMINES)
				cout << "No Flags!" << endl;
			else {


				PrintMineField(MineField, ROWS, COLS);
			}
			
		}
		else {
			cout << "Invalid choice!" << endl;
			continue;
		} 

		
	}
}

void Menu(int PlayerChoice) {


}