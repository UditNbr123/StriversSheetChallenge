#include <bits/stdc++.h>
int merge(vector<int> &a, int low, int mid, int high) {
    int count = 0;
    int j = mid + 1;
    for (int i = low; i <= mid; i++) {
        while (j <= high and a[i] > (long) 2 * a[j])
            j++;
        count += (j - (mid + 1));
    }
    vector<int> t;
    int left = low, right = mid + 1;
    while (left <= mid and right <= high) {
        if (a[left] <= a[right])
            t.push_back(a[left++]);
        else
            t.push_back(a[right++]);
    }
    while (left <= mid) t.push_back(a[left++]);
    while (right <= high) t.push_back(a[right++]);

    for (int i = low; i <= high; i++) {
        a[i] = t[i - low];
    }
    return count;
}
int mergeSort(vector<int> &a, int low, int high) {
    if (low >= high) return 0;
    int mid = low + (high - low) / 2;
    int inv = mergeSort(a, low, mid);
    inv += mergeSort(a, mid + 1, high);
    inv += merge(a, low, mid, high);
    return inv;
}
int reversePairs(vector<int> &arr, int n) {
    return mergeSort(arr, 0, n - 1);
}