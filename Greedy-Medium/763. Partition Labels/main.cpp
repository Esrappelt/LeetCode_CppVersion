#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> ans;
		map<char,int> loc;
		int max_index = 0,anc = 0;
		for(int i = 0; i < S.size(); i++) loc[S[i]-'a'] = i;
		for(int i = 0; i < S.size(); i++) {
			max_index = max(max_index,loc[S[i]-'a']);
			if(i == max_index) {
				ans.emplace_back(max_index - anc + 1);
				anc = i + 1;
			}
		}
		return ans;
    }
};


int main() {
	Solution s;
	s.partitionLabels("ababcbacadefegdehijhklij");
	return 0;
}
