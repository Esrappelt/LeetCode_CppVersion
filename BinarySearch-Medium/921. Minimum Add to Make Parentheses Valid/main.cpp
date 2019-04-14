#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minAddToMakeValid(string S) {
        int ans = 0,left = 0;
        for(int i = 0; i < S.length(); i++) {
            if(S[i] == '(') left++;
            else if(S[i] == ')') {
                if(left != 0) left--;
                else ans++;
            }
        }
        return ans + left;
    }
};
int main() {
    Solution s;
    int ans = s.minAddToMakeValid("())");
    cout << ans << endl;
    return 0;
}