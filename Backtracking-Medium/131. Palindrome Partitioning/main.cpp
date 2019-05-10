#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
		vector<string> ans;
		string tmp;
		vector<vector<string>> res;
    vector<vector<string>> partition(string s) {
			if(s.size() <= 1) return {{s}};		
			dfs(0,s);
			return res;
    }
	void dfs(int index,string &s) {
		if(index == s.size()){
			res.emplace_back(ans);
			return;
		}
		for(int i = index; i < s.size(); i++) {
			if(ok(s,index,i)) {
				ans.emplace_back(s.substr(index,i-index+1));
				dfs(i+1,s);
				ans.pop_back();
			}
		}
		
	}
	bool ok(string &s,int l,int r) {
		while(l < r) if(s[l++] != s[r--]) return false;
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
