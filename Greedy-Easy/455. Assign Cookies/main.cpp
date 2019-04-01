#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());//cookie
        sort(g.begin(),g.end());//child
        int i = 0,j = 0;
        while(i < s.size() && j < g.size()) {
            if(s[i] >= g[j]) j++;
            i++;
        }
        return j;
    }
};

int main() {
    Solution s;
    vector<int> g = {1,2,3},v = {1,1};
    int ans = s.findContentChildren(g,v);
    cout << ans << endl;
    return 0;
}
