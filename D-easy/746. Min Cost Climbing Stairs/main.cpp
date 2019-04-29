#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int len = cost.size();
        vector<int> dp(len);
        dp[0] = cost[0],dp[1] = cost[1];
        for(int i = 2; i < len; i++) dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
        return min(dp[len-1],dp[len-2]);
    }
};

int main() {
    Solution s;
    vector<int> cost = {10,15,20};
    int ans = s.minCostClimbingStairs(cost);
    cout << ans << endl;
    return 0;
}