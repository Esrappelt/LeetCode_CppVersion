#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    sort(nums2.begin(),nums2.end());
    vector<int> ans;
    set<int> tmp;
    for(int i = 0; i < nums1.size(); i++)  {
        int index = lower_bound(nums2.begin(),nums2.end(),nums1[i]) - nums2.begin();
        //cout << index << endl;
        if(index != nums2.size() && nums2[index] == nums1[i]) {
            tmp.insert(nums1[i]);
        }
    }
    for(auto &it:tmp) {
        ans.push_back(it);
    }
    return ans;
}

int main()
{
    vector<int> a = {1,2,2,1},b = {2,2,1},ans;
    ans = intersection(a,b);
    for(auto &it : ans) cout << it << endl;
    return 0;
}
