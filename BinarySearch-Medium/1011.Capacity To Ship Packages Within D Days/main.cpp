#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        int right  = accumulate(weights.begin(),weights.end(),0);
        int left = max(right/D,*max_element(weights.begin(),weights.end()));
        return search(left,right,D,weights);
    }
    int search(int l,int r,int D,vector<int>& weights) {
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(ok(mid,weights) > D) l = mid + 1;
            else r = mid - 1;
        }
        return l;
    }
    int ok(int m,vector<int>& weights) {
        int res = 1,sum = 0;
        for(auto key : weights) {
            sum += key;
            if(sum > m) res++,sum = key;
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> g = {1,2,3,4,5,6,7,8,9,10};
    int ans = s.shipWithinDays(g,5);
    cout << ans << endl;
    return 0;
}
