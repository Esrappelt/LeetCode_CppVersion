#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string reverseVowels(string s) {
		map<char,bool> isVowels;
		isVowels['a'] = isVowels['e'] = isVowels['i'] = isVowels['o'] = isVowels['u'] = true;
		isVowels['A'] = isVowels['E'] = isVowels['I'] = isVowels['O'] = isVowels['U'] = true;
		int p = 0,q = s.size() - 1;
		while(p < q) {
			if(isVowels[p] && isVowels[q]) {
				cout << s[p] << ',' << s[q] << endl;
				swap(s[p++],s[q--]);
			}
			if(!isVowels[p]) p++;
			if(!isVowels[q]) q--;
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
