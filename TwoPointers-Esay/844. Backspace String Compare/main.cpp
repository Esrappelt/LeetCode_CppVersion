#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<int> s,t;
        for(auto key : S) {
            if(key != '#') s.push(key);
            else if(!s.empty()) s.pop();
        }
        for(auto key : T) {
            if(key != '#') t.push(key);
            else if(!t.empty()) t.pop();
        }
        if(s.size() != t.size()) return false;
        while(!s.empty() && !t.empty()) {
            if(s.top() != t.top()) return false;
            s.pop();t.pop();
        }
        return true;
    }
};
int main() {
    Solution s;
    bool ans = s.backspaceCompare("a##c","a#d#c");
    cout << ans << endl;
	return 0;
}
