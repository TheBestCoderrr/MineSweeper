bool IfDestroyMine(char** MineField, const int PlayerRow, const int PlayerCol) {
	return MineField[PlayerRow][PlayerCol] == '*' ? true : false;	
}

void SetFlag(char** MineField, const int PlayerRow, const int PlayerCol) {
	MineField[PlayerRow][PlayerCol] = 'F';
}

void DeleteFlag(char** MineField, const int PlayerRow, const int PlayerCol, char PreviousSymbol) {
	MineField[PlayerRow][PlayerCol] = PreviousSymbol;
}