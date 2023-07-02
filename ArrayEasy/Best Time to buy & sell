problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/


//Brute force solution is possible by identifying difference b/w every two element and finding the max difference.
//This can be done by double for loop, initializing maxprofit=0. then updating it.
// int maxProfit(vector<int> &arr) {
//     int maxPro = 0;
//     int n = arr.size();

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] > arr[i]) {
//             maxPro = max(arr[j] - arr[i], maxPro);
//             }
//         }
//         }

//     return maxPro;
// }

//Maddheshiya Logic
// int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         vector <int> vec(n,0);
//         int mx=0,maxprofit=0;
//         for(int i=n-1;i>=0;i--)
//         {
//             int t=prices[i];
//             mx= max(mx,t);
//             vec[i]=mx;
//         }
//         for(int i=0;i<n-1;i++)
//         {
//             maxprofit= max(maxprofit,vec[i]-prices[i]);
//         }
//         return maxprofit;
//     }


class Solution {
public:
    int maxProfit(vector<int>& arr) {
       int maxPro = 0;
    int n = arr.size();
    int minPrice = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }
    
    return maxPro;
    }
};




// Approach:

// Create a variable maxPro and store 0 initially.
// Create a variable minPrice and store some larger value(ex: MAX_VALUE) value initially.
// Run a for loop from 0 to n.
// Update the minPrice if it is greater than the current element of the array
// Take the difference of the minPrice with the current element of the array and compare and maintain it in maxPro.
// Return the maxPro.
