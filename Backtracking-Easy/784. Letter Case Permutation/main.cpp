#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
	vector<string> ans;
    vector<string> letterCasePermutation(string S) {
        backtrack(S,0);
		return ans;
    }
	void backtrack(string s,int dep) {
		if(dep >= s.length()) {
			ans.emplace_back(s);
			return;
		}
		if(isalpha(s[dep])) {
			s[dep] = tolower(s[dep]);
			backtrack(s,dep+1);
			s[dep] = toupper(s[dep]);
			backtrack(s,dep+1);
		}else backtrack(s,dep+1);
	}
};


int main() {
	Solution s;
	vector<string> ans = s.letterCasePermutation("a1b2");
	for(auto it : ans) cout << it << endl;
	return 0;
}
