#include<bits/stdc++.h>
using namespace std;



struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
//链表检查是否有环
class Solution {
public:
    bool hasCycle(ListNode *head) {
		if(!head || !head->next) return false;
		ListNode *p = head,*q = head->next;
		while(p != q) {
			if(!q || !q->next) return false;
			p = p->next;
			q = q->next->next;
		}
		return true;
    } 
};


int main() {

	return 0;
}
