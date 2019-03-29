#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int index = upper_bound(letters.begin(),letters.end(),target) - letters.begin();
        return index < letters.size() ? letters[index] : letters[0];
    }
};

int main() {
    return 0;
}
