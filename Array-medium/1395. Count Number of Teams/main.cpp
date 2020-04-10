#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int numTeams(vector<int>& rating) {
        //rating = [2,5,3,4,1]
        int ans = 0;
        for(int i = 0; i < rating.size(); i++){
            for(int j = i + 1; j < rating.size(); j++){
                for(int k = j + 1; k < rating.size(); k++){
                    if(rating[i] < rating[j] && rating[j] < rating[k]) ans++;
                    if(rating[i] > rating[j] && rating[j] > rating[k]) ans++;
                    cout << rating[i] << ' ' << rating[j] << ' ' << rating[k] << endl;
                }
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> rating = {1,2,3,4};
    cout << s.numTeams(rating);
    return 0;
}
