#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<string> ans;
	vector<string> phone = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> letterCombinations(string digits) {
		if(!digits.size()) return {};
		dfs(0,digits,"");
		return ans;
    }
	void dfs(int dep,string digits,string s) {
		if(dep >= digits.size()) {
			ans.emplace_back(s);
			cout << s << endl;
			return;
		}
		string t = phone[digits[dep]-'0'];
		for(int i = 0; i < t.size(); i++) dfs(dep+1,digits,s + t[i]);
	} 
};


int main() {
	Solution s;
	s.letterCombinations("23");
	return 0;
}
