#include <bits/stdc++.h>
int uniqueSubstrings(string input)
{
    vector<int> a(256, -1);
    int l = 0, r = 0;
    int res = 0;
    int n = input.size();
    while (r < n) {
        if (a[input[r]] != -1) {
            l = max(a[input[r]] + 1, l);
        }
        a[input[r]] = r;
        res = max(r - l + 1, res);
        r++;
    }
    return res;
}