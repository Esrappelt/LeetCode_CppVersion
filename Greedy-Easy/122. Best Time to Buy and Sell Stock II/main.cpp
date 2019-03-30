#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lenP = prices.size();
        int maxpro = 0;
        for(int i = 1; i < lenP; i++) {
            if(prices[i] > prices[i-1]) maxpro += prices[i] - prices[i-1];
        }
        return maxpro;
    }
};

int main() {
    Solution s;
    vector<int> A = {7,1,5,3,6,4};
    int ans = s.maxProfit(A);
    printf("%d\n",ans);
    return 0;
}