#include<bits/stdc++.h>
using namespace std;
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};


class Solution {
public:
    map<int,Employee*> ans;
    int res = 0;
    int getImportance(vector<Employee*> employees, int id) {
        for(auto it : employees) {
            ans[it->id] = it;
        }
        dfs(id);  
        return res;      
    }
    void dfs(int id) {
        res += ans[id]->importance;
        for(auto it : ans[id]->subordinates) {
            dfs(it);
        }
    }
};


int main() {
	Solution s;
	return 0;
}
