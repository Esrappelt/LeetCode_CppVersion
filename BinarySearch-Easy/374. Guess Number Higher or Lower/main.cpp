#include<bits/stdc++.h>
using namespace std;
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int l = 0,r = n;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            int sign = guess(mid);
            if(sign == -1 ) l = mid + 1;
            else if(sign == 1) r = mid - 1;
            else return mid;
        }
        return -1;
    }
};
int main() {
    Solution s;
    int ans = s.guessNumber(6);
    cout << ans << endl;
    return 0;
}