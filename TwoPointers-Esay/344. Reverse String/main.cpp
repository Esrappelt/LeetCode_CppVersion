#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int p = 0,q = s.size() - 1;
		while(p < q) swap(s[p++],s[q--]);
	}
};

int main() {
	Solution t;
	vector<char> s = {'h','e','l','l','o','!'};
	t.reverseString(s);
	for(auto key : s) cout << key;
	return 0;
}
