#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1) return 1;
        vector<int> ans(n+1);
        ans[0] = 1,ans[1] = 1;
        ans[2] = 2;
        for(int i = 3; i <= n; i++) ans[i] = ans[i-1] + ans[i-2];
        return ans[n];
    }
};

int main() {
    Solution s;
    int ans = s.climbStairs(4);
    cout << ans << endl;
    return 0;
}