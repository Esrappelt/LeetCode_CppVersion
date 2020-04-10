#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans(arr.size());
        int m = -1;
        for(int i = arr.size() - 1; i >= 0; i--){
            ans[i] = m;
            m = max(m, arr[i]);
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> arr = {17,18,5,4,6,1},ans;
    ans = s.replaceElements(arr);
    for(auto it : ans) cout << it << ' ';
    return 0;
}
