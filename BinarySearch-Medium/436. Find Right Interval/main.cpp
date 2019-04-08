#include<bits/stdc++.h>
using namespace std;

 // Definition for an interval.
struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};
 
class Solution {
public:
    vector<int> findRightInterval(vector<Interval>& intervals) {
        // if(intervals.size() <= 1) return vector<int> {-1};
        vector<int> ans;
        int k = 0;
        map<int,int> E;
        for(auto &it : intervals) E[it.start] = k++;
        for(auto &key : intervals) {
            auto it = E.lower_bound(key.end);  
            ans.emplace_back(it == E.end() ? -1 : it->second);
        }
        return ans;
    }
};
int main() {
    Solution s;
    return 0;
}
