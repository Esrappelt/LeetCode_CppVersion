#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size(),l = matrix[0][0],r = matrix[n-1][n-1];
        while(l < r) {
            int mid = l + (r - l) / 2;
            int pos = 0;
            for(int i = 0; i < n; i++) pos += upper_bound(matrix[i].begin(),matrix[i].end(),mid) - matrix[i].begin();
            if(pos >= k) r = mid;
            else l = mid + 1;
        }
        return r;
    }
};

int main() {
    
    return 0;
}
