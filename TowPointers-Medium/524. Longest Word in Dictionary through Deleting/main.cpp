#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
		int maxL = -1;
		string ans = "";
		for(auto str : d) {
			if(inS(s,str)) {
				if(ans.length() < str.length() || ans.length() == str.length() && str < ans) ans = str;
			} 
		}
		return ans;
    }
	bool inS(string& s,string& str) {
		int p = 0,q = 0;
		while(p < s.length() && q < str.length()) {
			if(s[p] == str[q]) q++;
			p++;
		}
		return q == str.length();
	}
};


int main() {
	Solution s;
	string ss = "abpcplea";
	vector<string> d = {"ale","apple","monkey","plea"};	
	string ans = s.findLongestWord(ss,d);
	cout << ans;
	return 0;
}
