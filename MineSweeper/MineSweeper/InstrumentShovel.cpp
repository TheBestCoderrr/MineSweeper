#include <string.h>

bool IfCellisNum(char** MineField, const int PlayerRow, const int PlayerCol, char PatternNum[]) {
	for (int i = 0; i < strlen(PatternNum); i++)
		if (MineField[PlayerRow][PlayerCol] == PatternNum[i])
			return true;
	return false;
}

void DigCell(char** MineField, char** PlayerField, const int PlayerRow, const int PlayerCol){
	PlayerField[PlayerRow][PlayerCol] = MineField[PlayerRow][PlayerCol];
}
