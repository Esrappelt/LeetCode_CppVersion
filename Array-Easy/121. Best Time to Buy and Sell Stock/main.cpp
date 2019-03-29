#include <bits/stdc++.h>
using namespace std;

//暴力
int maxProfit(vector<int>& prices) {
    int maxPro = -1,len = prices.size();
    for(int i = 0; i < len; i++) {
        for(int j = i + 1; j < len; j++) {
            if(prices[j] > prices[i]) {
                maxPro = max(maxPro,prices[j] - prices[i]);
            }
        }
    }
    return maxPro == -1 ? 0 : maxPro;
}


int maxProfit2(vector<int>& prices) {
    //同时找最小值和最大利润
    int minPrice = INT_MAX;
    int maxProfit = 0;
    for(int i = 0; i < prices.size(); i++) {
        if(minPrice > prices[i]) {
            minPrice = prices[i];//一直找最小的价格
        } else if(maxProfit < prices[i] - minPrice) {//如果当前的利润小于了当前的价格减去最小的价格
            maxProfit = prices[i] - minPrice;
        }
    }
    return maxProfit;
}

int main()
{
    vector<int> prices = {7,6,4,3,5,9};
    int res = maxProfit2(prices);
    cout << res;
    return 0;
}
