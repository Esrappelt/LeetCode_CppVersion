#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for(int i = 0; i < grid.size(); i++){
            vector<int> t = grid[i];
            int low = 0, high = t.size() - 1;
            while(low < high){
                int mid = low + (high - low)/2;
                if( t[mid] < 0) high = mid;
                else low = mid + 1;
            }
            if(t[low] < 0) ans += t.size() - low;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> grid = {{4,3,2,1},{3,2,1,-1},{1,1,-1,-2},{-3,-4,-5,-5}};
    cout << s.countNegatives(grid);
    return 0;
}
