#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    if (n < 4) return "No";
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        int ntarget = target - arr[i];
        for (int j = i + 1; j < n - 2; j++) {
            int l = j + 1, h = n - 1;
            int ftarget = ntarget - arr[j];
            while (l < h) {
                if (arr[l] + arr[h] == ftarget)  return "Yes";
                else if (arr[l] + arr[h] < ftarget)  l++;
                else h--;
            }
        }
    }
    return "No";
}
