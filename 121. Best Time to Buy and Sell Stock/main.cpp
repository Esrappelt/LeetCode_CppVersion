#include <bits/stdc++.h>
using namespace std;

//����
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
    //ͬʱ����Сֵ���������
    int minPrice = INT_MAX;
    int maxProfit = 0;
    for(int i = 0; i < prices.size(); i++) {
        if(minPrice > prices[i]) {
            minPrice = prices[i];//һֱ����С�ļ۸�
        } else if(maxProfit < prices[i] - minPrice) {//�����ǰ������С���˵�ǰ�ļ۸��ȥ��С�ļ۸�
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
