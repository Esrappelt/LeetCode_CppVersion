#include<bits/stdc++.h>
using namespace std;
bool isBadVersion(int version);
int firstBadVersion(int n) {
	int l = 0,r = n - 1;
	while(l <= r) {
		int mid = l + (r - l) / 2;
		if(isBadVersion(mid)) {
			return mid;
		}else {
			
		}
	}        
}

int main() {
	
	return 0;
}
