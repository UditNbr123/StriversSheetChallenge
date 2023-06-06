#include <bits/stdc++.h>
int solve(vector<vector<int>> &dp, int m, int n) {
	if (m == 0 or n == 0)	return 1;
	if (dp[m][n] != -1) return dp[m][n];

	return dp[m][n] = solve(dp, m - 1, n) + solve(dp, m, n - 1);
}
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>> dp(m, vector<int>(n, -1));
	return solve(dp, m - 1, n - 1);
}