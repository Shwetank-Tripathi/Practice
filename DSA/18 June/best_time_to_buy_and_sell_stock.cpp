#include <vector>
using namespace std;

class Solution {
public:
    int bForce(vector<int> arr){
        int profit=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                profit=max(profit,(arr[j]-arr[i]));
            }
        }
        return profit;
    }

    int optimal(vector<int> arr){
        int minPrice=arr[0];
        int maxProfit=0;
        for(int i=1;i<arr.size();i++){
            int currProfit=arr[i]-minPrice;
            maxProfit=max(currProfit,maxProfit);
            minPrice=min(arr[i],minPrice);
        }
        return maxProfit;        
    }

    int maxProfit(vector<int>& prices) {
        //return bForce(prices); //time exceeding error
        return optimal(prices);

    }

};