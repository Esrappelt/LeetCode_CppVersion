#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
		int p = 0,q = s.size() -1;
		while(p < q) {
			bool isp = isalnum(s[p]),isq = isalnum(s[q]);
			if(isp && isq) {
				if(tolower(s[p]) != tolower(s[q])) return false;
				p++,q--;
			}else if(isp) q--;
			else p++;
		}
		return true;
    }
};
int main() {
	Solution s;
	bool ans = s.isPalindrome("race a car");
	cout << ans;
	return 0;
}
