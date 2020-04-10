#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i = 0; i < A.size(); i++){
            reverse(A[i].begin(), A[i].end());
            for(int j = 0; j < A[i].size(); j++) A[i][j] = !A[i][j];
        }
        return A;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> A = {{1,1,0},{1,0,1},{0,0,0}};
    A = s.flipAndInvertImage(A);
    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < A[i].size(); j++) cout << A[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
