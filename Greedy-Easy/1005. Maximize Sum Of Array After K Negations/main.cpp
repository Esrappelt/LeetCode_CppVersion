#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        int len = A.size(),sum = 0;
        sort(A.begin(),A.end());
        int pivot = lower_bound(A.begin(),A.end(),0) - A.begin();//负数的个数
        if(K <= pivot) {
            for(int i = 0; i < len; i++) sum += i < K ? -A[i] : A[i];
        } else {
            for(int i = 0; i < len; i++) sum += (A[i] >= 0 ? A[i] : -A[i]);
            if( (K - pivot) % 2 != 0) sum -= pivot == 0 ? 2 *A[0] : 2 * min(A[pivot],-A[pivot-1]);
        }
        return sum;
    }
};

int main() {
    vector<int> bills = {-9,-8,-7};
    Solution s;
    int ans = s.largestSumAfterKNegations(bills,2);
    cout << ans << endl;
    return 0;
}
