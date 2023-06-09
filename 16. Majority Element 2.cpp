#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int s = arr.size() / 3;
    vector<int> res;
    map<int, int> mp;
    for (auto x : arr) mp[x]++;
    for (auto x : mp) {
        if (x.second > s)
            res.push_back(x.first);
    }
    return res;

}