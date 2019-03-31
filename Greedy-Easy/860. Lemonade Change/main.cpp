#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0,ten = 0;
        for(int i = 0,n = bills.size(); i < n; i++) {
            int cur = bills[i];
            if(cur == 5) five++;
            else if(cur == 10){
                ten++;
                if(--five < 0) return false;
            } else {
                if(ten == 0) {
                    if(five < 3) return false;
                    else five -= 3;
                } else {
                    if(five == 0) return false;
                    else five--,ten--;
                }
            }
        }
        return true;
    }
};

int main() {
    vector<int> bills = {5,5,10,20,5,5,5,5,5,5,5,5,5,10,5,5,20,5,20,5};
    Solution s;
    bool ans = s.lemonadeChange(bills);
    cout << ans << endl;
    return 0;
}
