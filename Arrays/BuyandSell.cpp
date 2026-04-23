#include <iostream>
using namespace std;

void maxProfit(int *prices, int n){
    int bestBuy[100000];
    bestBuy[0] = INT16_MAX;
    for(int i=1; i <=n-1; i++){
        bestBuy[i] = min(bestBuy[i-1] , prices[i-1]);
    }
     int maxProfit = 0;
     for(int i =0; i<n; i++){
        int CurrProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit , CurrProfit);
     }

    cout << "Max Profit = " << maxProfit << endl;

}

 int main(){
    int prices[6] = {7, 1, 5, 3, 6, 4};
    int n =sizeof(prices) / sizeof(int);
    maxProfit(prices , n);
    return 0;
    
 }

