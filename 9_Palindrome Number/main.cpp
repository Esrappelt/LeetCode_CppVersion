#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long tmp = 0,y = x;
        while(y) {
            tmp = tmp * 10 + y % 10;
            y /= 10;
        }
        return tmp == x;
    }
    bool isPalindrome2(int x) {
        if(x < 0) return false;
        string y = to_string(x);
        int len = y.length();
        for(int i = 0; i < len / 2; i++) {
            if(y[i] != y[len-i-1]) {
                return false;
            }
        }
        return true;
    }
};


int main()
{
    Solution s;
    cout << s.isPalindrome2(101) << endl;
    return 0;
}
