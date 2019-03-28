#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arrangeCoins(int n) {
        return (sqrt(1 + 8 * (long long)n) - 1)/ 2;
    }
};
int main() {
    Solution s;
    int ans = s.arrangeCoins(8);
    cout << ans << endl;
    return 0;
}