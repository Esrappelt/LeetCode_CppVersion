#include<bits/stdc++.h>
using namespace std;
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0,r = n;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(isBadVersion(mid)) r = mid - 1;
            else l = mid + 1;
        }
        return r;
    }
};
int main() {
    Solution s;
    int ans = s.firstBadVersion(921239930823161944);
    cout << ans << endl;
    return 0;
}