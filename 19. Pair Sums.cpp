#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s) {
   map<int, int> mp;
   vector<vector<int>> res;
   sort(arr.begin(), arr.end());
   int i = 0, j = arr.size() - 1;
   while (i < arr.size()) {
      if (j == i) {
         j = arr.size() - 1;
         i++;
      }
      if (arr[i] + arr[j] == s) {
         res.push_back({arr[i], arr[j]});
         if (i == j) {
            j = arr.size() - 1;
            i++;
         }
         j--;
      }
      else {
         if (j == i) {
            j = arr.size() - 1;
            i++;
         }
         else  j--;
      }
   }
   return res;

}