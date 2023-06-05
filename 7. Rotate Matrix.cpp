#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    if (n == 1 or m == 1) return;

    int top = 0, bot = n - 1, left = 0, right = m - 1;

    while (top < bot and left < right) {
        int temp = mat[left][top];

        for (int i = top; i < bot; i++)
            mat[i][left] = mat[i + 1][left];

        for (int i = left; i < right; i++)
            mat[bot][i] = mat[bot][i + 1];

        for (int i = bot; i > top; i--)
            mat[i][right] = mat[i - 1][right];

        for (int i = right; i > left; i--)
            mat[top][i] = mat[top][i - 1];

        mat[top][left + 1] = temp;
        top++, bot--, left++, right--;
    }

}