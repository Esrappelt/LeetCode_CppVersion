#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        int a = 0,b = 0,lenA = A.size(),lenB = B.size();
		vector<vector<int>> ans;
		while(a < lenA && b < lenB) {
			int p = max(A[a][0],B[b][0]),q = min(A[a][1],B[b][1]);			
			if(p <= q) ans.emplace_back(vector<int>{p,q});
			A[a][1] < B[b][1] ? a++ : b++;
		}
		return ans;
    }
};

int main() {
	Solution s;
	vector<vector<int>> A = {
		{0,2},{5,10},{13,23},{24,25}
	},B = {
		{1,5},{8,12},{15,24},{25,26}
	},ans;
	ans = s.intervalIntersection(A,B);
	for(auto it : ans) cout << it[0] << ',' << it[1] << endl;
	return 0;
}
