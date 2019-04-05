#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence2(string s, string t) {
        int p = 0,q = 0,psize = s.size(),qsize = t.size();
        while(p < psize && q < qsize) if(s[p] == t[q++]) p++;
        return p == psize;
    }
    bool isSubsequence(string s, string t) {
        
    }
};
int main() {
    Solution s;
    cout << s.isSubsequence("abc","");
    return 0;
}
