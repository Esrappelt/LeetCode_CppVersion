#include<bits/stdc++.h>
using namespace std;

int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
	int ans = 0;
	vector<int> res1,res2;
	for(int i = 0; i < A.size(); i++) {
		for(int j = 0; j < B.size(); j++) {
			res1.push_back(A[i]+B[j]);
		}
	} 
	for(int i = 0; i < C.size(); i++) {
		for(int j = 0; j < D.size(); j++) {
			res2.push_back(C[i]+D[j]);
		}
	} 
	sort(res1.begin(),res1.end());
	sort(res2.begin(),res2.end());
	for(int i = 0; i < res1.size(); i++) {
		int tofind = -res1[i];
		int indic = lower_bound(res2.begin(),res2.end(),tofind) - res2.begin();
		if(indic != res2.size() && res2[indic] == tofind) {
			int indic2 = upper_bound(res2.begin(),res2.end(),tofind) - res2.begin();
			ans += (indic2 - indic );
		}
	}
	return ans;	        
}

int main() {
	printf("hello world"); 
	return 0;
}
