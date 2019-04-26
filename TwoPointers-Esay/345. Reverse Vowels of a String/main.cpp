#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string reverseVowels(string s) {
			int isVowels[125] = {0};
			isVowels['a'] = isVowels['e'] = isVowels['i'] = isVowels['o'] = isVowels['u'] = 1;
			isVowels['A'] = isVowels['E'] = isVowels['I'] = isVowels['O'] = isVowels['U'] = 1;
			int p = 0,q = s.size() - 1;
			while(p < q) {
				if(isVowels[s[p]] && isVowels[s[q]]) swap(s[p++],s[q--]);
				if(!isVowels[s[p]]) p++;
				if(!isVowels[s[q]]) q--;
			}
			return s;
    }
};


int main() {
	Solution s;
	string ans = s.reverseVowels("hello");
	cout << ans;
	return 0;
}
