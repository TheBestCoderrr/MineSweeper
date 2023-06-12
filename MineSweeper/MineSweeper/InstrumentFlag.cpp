bool IfDestroyMine(char** MineField, const int PlayerRow, const int PlayerCol) {
	return MineField[PlayerRow][PlayerCol] == '*' ? true : false;	
}

void SetFlag(char** PlayerField, const int PlayerRow, const int PlayerCol) {
	PlayerField[PlayerRow][PlayerCol] = 'F';
}

void DeleteFlag(char** PlayerField, const int PlayerRow, const int PlayerCol, char PreviousSymbol) {
	PlayerField[PlayerRow][PlayerCol] = PreviousSymbol;
}