#include <iostream>


#include "InitPrintMineField.h"
#include "GenerateMinesAndNumsInField.h"
#include "InstrumentFlag.h"
#include "InstrumentShovel.h"
#include "WinOrLose.h"

using namespace std;



void StartGame(char** MineField,char** PlayerField, int FlagInField,int PlayerRow,int PlayerCol,
	int PlayerInstruments, int CountDestroyMines,char PreviousSymbol, char PatternNum[]) {
	
	FlagInField = 0;
	PlayerInstruments = 1;
	CountDestroyMines = 0;
	PreviousSymbol = NULL;

	int ROWS, COLS, COUNTMINES;

	unsigned short int Complexity;
	bool Break = true;
	cout << "Complexity:\n1 - eazy\n2 - middle\n3 - hard" << endl;
	while (Break) {
		cout << "Enter Complexity:";
		cin >> Complexity;

		switch (Complexity) {
			case 1:
				ROWS = 8;
				COLS = 10;
				COUNTMINES = 10;
				Break = false;
				break;
			case 2:
				ROWS = 14;
				COLS = 18;
				COUNTMINES = 40;
				Break = false;
				break;
			case 3:
				ROWS = 24;
				COLS = 20;
				COUNTMINES = 99;
				Break = false;
				break;
			default:
				cout << "Invalid complexity!" << endl;
				break;
		}

	}

	InitField(PlayerField, ROWS, COLS);
	InitField(MineField, ROWS, COLS);
	GenerateMines(MineField, ROWS, COLS, COUNTMINES);
	GenerateNums(MineField, ROWS, COLS);
	PrintField(MineField, ROWS, COLS);


	while (true) {
		cout << "Game/Enter your choice: ";
		cin >> PlayerRow;
		if (PlayerRow == 0) {
			cout << "Game Over!" << endl;
			break;
		}
		else if (PlayerRow == -1) {
			PlayerInstruments++;
			if(PlayerInstruments % 2 == 0)
				cout << "Switch to Flag!" << endl;
			else
				cout << "Switch to Shovel!" << endl;
		}
		else if (PlayerRow >= 1 && PlayerRow <= ROWS - 1) {

			cin >> PlayerCol;

			if (PlayerField[PlayerRow][PlayerCol] == 'F') {
				DeleteFlag(PlayerField, PlayerRow, PlayerCol, PreviousSymbol);
				FlagInField--;
				PrintField(PlayerField, ROWS, COLS);
				cout << "Count Flags: " << COUNTMINES - FlagInField << endl;
				continue;
			}

			//Flag
			if (PlayerInstruments % 2 == 0 && FlagInField < COUNTMINES) {
				if (IfDestroyMine(MineField, PlayerRow, PlayerCol))
					CountDestroyMines++;
				PreviousSymbol = PlayerField[PlayerRow][PlayerCol];
				SetFlag(PlayerField, PlayerRow, PlayerCol);
				FlagInField++;
				PrintField(PlayerField, ROWS, COLS);
				cout << "Count Flags: " << COUNTMINES - FlagInField << endl;
			}
			else if (FlagInField >= COUNTMINES)
				cout << "No Flags!" << endl;
			//Lopata
			else {
				if (MineField[PlayerRow][PlayerCol] == '*') {
					cout << "Game Over! You Lose..." << endl;
					MineField[PlayerRow][PlayerCol] = 'X';
					PrintField(MineField, ROWS, COLS);
					break;
				}
				else if (IfCellisNum(MineField, PlayerRow, PlayerCol, PatternNum))
					DigCell(MineField, PlayerField, PlayerRow, PlayerCol);
				
					
				PrintField(PlayerField, ROWS, COLS);
			}	
		}
		else {
			cout << "Invalid choice!" << endl;
			continue;
		} 

		if (WinOrLose(CountDestroyMines)) {
			cout << "Game Over! You Win..." << endl;
			break;
		}
	}
}

void Rules() {
	cout << "Rules..." << endl;
}

void Signs() {
	cout << "Signs: " << endl;
}

void Developers() {
	cout << "Developers..." << endl;
}

void Menu(int PlayerChoice, char** MineField, char** PlayerField, int FlagInField, int PlayerRow, int PlayerCol, int PlayerInstruments, 
	int CountDestroyMines, char PreviousSymbol, char PatternNum[]) {

	cout << "Menu:\n0 - Exit;\n1 - Start Game;\n2 - Rules\n3 - Signs;\n4 - Developers;\n" << endl;

	while (true) {

		cout << "Menu/Enter your choice: ";
		cin >> PlayerChoice;

		switch (PlayerChoice) {
			case 0:
				cout << "GoodBye!" << endl;
				break;
			case 1:
				StartGame(MineField, PlayerField, FlagInField, PlayerRow, PlayerCol, PlayerInstruments, CountDestroyMines,
					PreviousSymbol, PatternNum);
				cout << "New Game?" << endl;
				break;
			case 2:
				Rules();
				break;
			case 3:
				Signs();
				break;
			case 4:
				Developers();
				break;
			default:
				cout << "Invalid choice!" << endl;
				break;
		}

		if (PlayerChoice == 0)
			break;
	}
}