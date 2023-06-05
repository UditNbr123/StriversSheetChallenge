#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n)
{
  // Write your code here.
  vector<vector<long long int>> res;
  for (int i = 0; i < n; i++) {
    res.push_back(vector<long long int>(i + 1, 1));
  }
  if (n < 3) return res;

  for (int i = 2; i < n; i++) {
    for (int j = 1; j < res[i].size() - 1; j++) {
      res[i][j] = res[i - 1][j] + res[i - 1][j - 1];
    }
  }
  return res;
}
