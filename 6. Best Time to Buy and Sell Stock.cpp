#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices) {
    int mx = 0;
    int minp = INT_MAX;
    for (int i = 0; i < prices.size(); i++) {
        minp = min(minp, prices[i]);
        mx = max(mx, prices[i] - minp);
    }
    return mx;
}