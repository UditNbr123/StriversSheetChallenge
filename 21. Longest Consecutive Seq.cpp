#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    int res = INT_MIN;
    unordered_set<int> ss(arr.begin(), arr.end());
    for (int x : arr) {
        if (ss.find(x - 1) == ss.end()) {
            int cur = x, curl = 1;
            while (ss.find(cur + 1) != ss.end()) {
                cur++;
                curl++;
            }
            res = max(res, curl);
        }
    }
    return res;
}