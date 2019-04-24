#include<bits/stdc++.h>
using namespace std;


struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    bool isPalindrome(ListNode* head) {
		if(!head || !head->next) return true;
		vector<int> arr;
		while(head) {
			arr.emplace_back(head->val);
			head = head->next;
		}
		int p = 0,q = arr.size() - 1;
		while(p < q) if(arr[p++] != arr[q--]) return false;
		return true;
    }
};

int main() {

	return 0;
}
