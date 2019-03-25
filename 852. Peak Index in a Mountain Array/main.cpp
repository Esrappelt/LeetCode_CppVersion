#include<bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int>& A) {
	int l = 0,r = A.size() - 1;
	while(l <= r) {
		int mid = l + (r - l) / 2;
		if(A[mid] < A[mid+1]) l = mid + 1; 
		else if(A[mid] < A[mid-1]) r = mid - 1;
		else return mid;
	}        
	return -1;
}
int main() {
	
	return 0;
}
