#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int row = matrix.size();
	int col = matrix[0].size();

	bool is = false;
	for (int i = 0; i < row; i++) {

		if (matrix[i][0] == 0) is = true;

		for (int j = 1; j < col; j++) {
			if (matrix[i][j] == 0) {
				matrix[i][0] = 0;
				matrix[0][j] = 0;
			}
		}
	}
	for (int i = 1; i < row; i++) {
		for (int j = 1; j < col; j++) {
			if (matrix[i][0] == 0 or matrix[0][j] == 0)
				matrix[i][j] = 0;
		}
	}
	if (matrix[0][0] == 0)
		for (int i = 0; i < col; i++)
			matrix[0][i] = 0;
	if (is)
		for (int i = 0; i < row; i++)
			matrix[i][0] = 0;
}