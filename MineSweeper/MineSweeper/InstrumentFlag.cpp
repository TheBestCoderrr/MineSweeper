void SetFlag(char** MineField, const int PlayerRow, const int PlayerCol) {
	MineField[PlayerRow][PlayerCol] = 'F';

}

void DeleteFlag(char** MineField, const int PlayerRow, const int PlayerCol) {
	MineField[PlayerRow][PlayerCol] = '.';
}