#pragma once

void StartGame(char** MineField, char** PlayerField, const int ROWS, const int COLS, const int COUNTMINES, int FlagInField, int PlayerRow, int PlayerCol,
	int PlayerInstruments, int CountDestroyMines, char PreviousSymbol, char Pattern[]);

void Rules();

void Signs();

void Developers();

void Menu(int PlayerChoice, char** MineField, char** PlayerField, const int ROWS, const int COLS, const int COUNTMINES, int FlagInField,
	int PlayerRow, int PlayerCol, int PlayerInstruments, int CountDestroyMines, char PreviousSymbol, char PatternNum[]);

