#include <iostream>


#include "InitPrintMineField.h"
#include "GenerateMinesInField.h"

using namespace std;



void StartGame(char** MineField, const int ROWS, const int COLS, const int COUNTMINES) {
	int RowPlayer, ColPlayer;
	int PlayerInstruments = 1;

	InitMineField(MineField, ROWS, COLS);
	GenerateMines(MineField, ROWS, COLS, COUNTMINES);
	PrintMineField(MineField, ROWS, COLS);

	while (true) {
		cout << "Enter your choice: ";
		cin >> RowPlayer;
		if (RowPlayer == 0) {
			cout << "Game Over!" << endl;
			break;
		}
		else if (RowPlayer == -1) {
			PlayerInstruments++;
		}
		else if (RowPlayer >= 1 && RowPlayer <= ROWS - 1) {
			cin >> ColPlayer;

			if (PlayerInstruments % 2 == 0) {
				
			}
			else {
				//Lopata
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