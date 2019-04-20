class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        int a = 0,b = 0,lenA = A.size(),lenB = B.size();
		vector<vector<int>> ans;
		while(a < lenA && b < lenB) {
			int p = max(A[a][0],B[b][0]),q = min(A[a][1],B[b][1]);			
			if(p <= q) ans.emplace_back(vector<int> {p,q});
			A[a][1] < B[b][1] ? a++ : b++;
		}
		return ans;
    }
};