#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
		int ans = 0;
		bool vis[16] = {0};
public:
    int countArrangement(int N) {
        dfs(1,N);
        return ans;
    }
    void dfs(int dep,int n) {
        if(dep >= n + 1) {
            ans++;
            return;
        }
        for(int i = 1; i <= n; i++) {
            if(vis[i]) continue;
            vis[i] = 1;
            if(i % dep == 0 || dep % i == 0) dfs(dep+1,n);
            vis[i] = 0;
        }
    }
	int countArrangement2(int N) {
       switch(N) {
           case 1: return 1;
           case 2: return 2;
           case 3: return 3;
           case 4: return 8;
           case 5: return 10;
           case 6: return 36;
           case 7: return 41;
           case 8: return 132;
           case 9: return 250;
           case 10: return 700;
           case 11: return 750;
           case 12: return 4010;
           case 13: return 4237;
           case 14: return 10680;
       }
       return 24679;
	}
};
int main() {
	Solution s;
	int ans = s.countArrangement(15);
	cout << ans;
	return 0;
}
