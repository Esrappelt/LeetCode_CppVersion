#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<pair<int,int>> reconstructQueue(vector<pair<int, int>>& people) {
        sort(people.begin(),people.end(),[](pair<int,int> a,pair<int,int> b) {
			return a.first > b.first || (a.first == b.first && a.second < b.second);
		});
		vector<pair<int,int>> ans;
		for(auto it : people) {
			ans.insert(ans.begin() + it.second,it);
		}
		return ans;
    }
};


int main() {
	Solution s;
	vector<pair<int,int>> p {
		{6,0},{5,0},{4,0},{3,2},{2,2},{1,4}
	};
	vector<pair<int,int>> ans = s.reconstructQueue(p);
	for(auto it : ans) cout << it.first << ',' << it.second << endl;
	return 0;
}
