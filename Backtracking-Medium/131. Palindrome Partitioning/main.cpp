#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<string> ans;
	string tmp;
	vector<vector<string>> res;
    vector<vector<string>> partition(string s) {
		if(s.size() <= 1) return {{s}};		
		dfs(0,s.size(),s);
		return res;
    }
	void dfs(int index,int target,string &s) {
		if(target < 0) return;
		if(target == 0) {
			res.emplace_back(ans);
			return;
		}
		for(int i = 1; i <= s.size(); i++) {
			tmp = s.substr(index,i);
			if(!ok(tmp)) continue;
			ans.push_back(tmp);
			dfs(index + i,target - i,s);
			ans.pop_back();
		}
	}
	bool ok(string &s) {
		for(int p = 0,q = s.size() - 1; p < q; p++,q--) {
			if(s[p] != s[q]) return false;
		}
		return true;
	}
};

int main() {
	Solution s;
	vector<vector<string>> ans = s.partition("aabb");
	for(auto it : ans){
		for(auto jt : it) cout << jt << ' ';
		cout << endl;
	}
	return 0;
}
