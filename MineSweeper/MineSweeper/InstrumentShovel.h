#pragma once

bool IfCellisNum(char** MineField, const int PlayerRow, const int PlayerCol, char PatternNum[]);

void DigCell(char** MineField, char** PlayerField, const int PlayerRow, const int PlayerCol);
