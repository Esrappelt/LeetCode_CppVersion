#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return true;
        long long l = 0,r = num - 1,mid,tmp;
        while(l <= r) {
            mid = l + (r - l) / 2,tmp = mid * mid;
            if(tmp == num) return true;
            else if(tmp < num ) l = mid + 1;
            else r = mid - 1;
        }
        return false;
    }
};



int main()
{
    Solution s;
    cout << s.isPerfectSquare(25) << endl;
    return 0;
}
