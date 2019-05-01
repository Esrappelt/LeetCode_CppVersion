#include<bits/stdc++.h>
using namespace std;


class Solution {
private: 
	vector<int> h = {1,2,4,8},m = {1,2,4,8,16,32};
	vector<string> ans;
	int hour = 0,min = 0;
public:
    vector<string> readBinaryWatch(int num) {
        dfs(num,0);
		return ans;
    }
	void dfs(int num,int dep){
		if(num == 0) {
			ans.emplace_back(to_string(hour) + (min < 10 ? ":0" : ":") + to_string(min));
			return;
		}
		for(int i = dep; i < h.size() + m.size(); i++) {
			if(i < h.size()) {
				hour += h[i];
				if(hour <= 11) dfs(num-1,i+1);
				hour -= h[i];
			}else {
				min += m[i-h.size()];
				if(min <= 59) dfs(num-1,i+1);
				min -= m[i-h.size()];
			}
		}
	}
};

int main() {
	Solution s;
	vector<string> ans = s.readBinaryWatch(2);
	for(auto it : ans) cout << it << endl;
	return 0;
}
