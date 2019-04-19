#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int p = 0,q = 0,len1 = name.size(),len2 = typed.size();
		if(len2 < len1) return false;
		while(p < len1 && q < len2) {
			int nump = 1,numq = 1;
			if(name[p] != typed[q]) return false;
			while(name[p] == name[p+1] && p < len1 - 1) nump++,p++;
			while(typed[q] == typed[q+1] && q < len2 - 1) numq++,q++;
			p++,q++;
			if(numq < nump || p < len1 && q == len2) return false;
		}
		return true;
    }
};

int main() {
	Solution s;
	int ans = s.isLongPressedName("pyplrrzx","ppyypllrrzz");
	cout << ans;	
	return 0;
}
