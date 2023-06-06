#pragma once
bool IfDestroyMine(char** MineField, const int PlayerRow, const int PlayerCol);

void SetFlag(char** MineField, const int PlayerRow, const int PlayerCol);

void DeleteFlag(char** MineField, const int PlayerRow, const int PlayerCol, char PreviousSymbol);