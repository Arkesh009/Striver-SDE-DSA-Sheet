// 121. Best time to buy and sell stock

#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minInd = 0;
    int min=prices[0];
    int size = prices.size();
    for(int i=0; i < size; i++){
        if(min > prices[i]){
            min = prices[i];
            minInd = i;
        }
    }

    if(minInd == size-1){
        return 0;
    }

    int max=0;
    for(int i = minInd; i < size; i++){
        if(max < prices[i]){
            max = prices[i];
        }
    }

    int profit = max - min;

    return profit;


        // int mini = prices[0];
        // int maxProfit = 0;
        // int n = prices.size();
        // for(int i=1; i<n; i++){
        //     int cost = prices[i] - mini;
        //     maxProfit = max(maxProfit, cost);
        //     mini = min(mini, prices[i]);
        // }
        // return maxProfit;
}

int main()
{
   vector<int> prices = {6,9,5,1,2,3,4,7,8};

   int profit = maxProfit(prices);

   cout << "The max profit can be made: " << profit;

   return 0;
}