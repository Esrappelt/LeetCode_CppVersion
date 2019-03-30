#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int eveLen = A[0].size(),lenA = A.size();
        int ans = 0;
        for(int i = 0; i < eveLen; i++) {
            for(int j = 0; j < lenA - 1; j++) {
                if(A[j][i] > A[j+1][i]) {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<string> A = {"zyx","wvu","tsr"};
    int ans = s.minDeletionSize(A);
    printf("%d\n",ans);
    return 0;
}