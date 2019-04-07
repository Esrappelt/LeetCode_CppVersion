#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        int l = 1, r = *max_element(piles.begin(),piles.end());
        while(l < r) {
            int mid = l + (r - l) / 2;
            if(isok(piles,mid,H)) r = mid;
            else l = mid + 1;
        }
        return l;
    }
    bool isok(vector<int>& piles, int mid,int H) {
        for(auto key : piles) {
            H -= (key-1)/mid + 1;
            if(H < 0) return false;
        }
        return true;//没有超过8小时
    }
};
int main() {
    Solution s;
    vector<int> piles = {3,6,7,11};
    int H = 8;
    int ans = s.minEatingSpeed(piles,H);
    cout << ans << endl;
    return 0;
}
