#include <bits/stdc++.h>
vector<int> nextPermutation(vector<int> &num, int n)
{
    //  Write your code here.
    int idx = n - 1;
    while (idx >= 0 and num[idx - 1] > num[idx]) idx--;

    if (idx == 0) {
        sort(num.begin(), num.end());
        return num;
    }
    else {
        int temp = num[idx - 1];
        int prev = idx;
        for (int i = idx; i < num.size(); i++) {
            if (num[i] > temp and num[i] < num[prev])
                prev = i;
        }
        swap(num[prev], num[idx - 1]);
        sort(num.begin() + idx, num.end());
        return num;
    }
}