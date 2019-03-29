#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) {
	int len = numbers.size();
	vector<int> ans;
	for(int i = 0; i < len - 1; i++) {
		int tofind = target - numbers[i];
		int indic = lower_bound(numbers.begin() + i + 1,numbers.end(),tofind) - numbers.begin();
		if(indic != len && tofind == numbers[indic]) {
			ans.push_back(i+1);
			ans.push_back(indic+1);
			return ans;
		}
	}    
	return ans;  
}
int main() {
	vector<int> a;
	a.push_back(5);
	a.push_back(25);
	a.push_back(75);
	a = twoSum(a,100);
	cout << a[0] << ' ' << a[1] << endl;
	return 0;
}
