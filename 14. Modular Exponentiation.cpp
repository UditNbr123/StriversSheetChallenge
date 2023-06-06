#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	long long int res = 1;
	long long int xx = x;
	while (n > 0) {
		if (n % 2 != 0)
			res = ((res) % m * (xx) % m) % m;

		xx = ((xx) % m * (xx) % m) % m;
		n = n >> 1;
	}
	return (int)(res % m);
}