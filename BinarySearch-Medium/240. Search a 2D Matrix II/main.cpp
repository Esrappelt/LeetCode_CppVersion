#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return 0;
        int p = 0,q = matrix[0].size() - 1;
        while(p < matrix.size() && q >= 0) {
            if(matrix[p][q] == target) return true;
            else if(matrix[p][q] < target) p++;
            else q--;
        }
        return false;
    }
};
int main() {
    Solution s;
    return 0;
}
