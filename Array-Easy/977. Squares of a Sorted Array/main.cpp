#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> ans;
        int index = lower_bound(A.begin(),A.end(),0) - A.begin();
        int p = index,q = index - 1;
        while(p < A.size() && q >= 0) {
            int m = A[p] * A[p],n = A[q] * A[q];
            ans.emplace_back(m < n ? m : n);
            m < n ? p++: q--;
        }
        while(p < A.size()) ans.emplace_back(A[p] * A[p++]);
        while(q >= 0) ans.emplace_back(A[q] * A[q--]);
        return ans;
    }
};
class Solution2 {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> ans;
        map<int,int> res;
        for(auto key : A) res[key >= 0 ? key : -key]++;
        for(auto &it : res) 
            while(it.second--) ans.emplace_back(it.first * it.first);
        return ans;
    }
};

class Solution3 {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> ans;
        int num[10001] = {0};
        for(auto key : A) num[abs(key)]++;
        for(int i = 0; i <= 10000; i++) {
            while(num[i]--) ans.emplace_back(i * i);
        }
        return ans;
    }
};
class Solution4 {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for(auto &key : A) key = key * key;
        sort(A.begin(),A.end());
        return A;
    }
};
int main() {
    Solution s;
    return 0;
}
