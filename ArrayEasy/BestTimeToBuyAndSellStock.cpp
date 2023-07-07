class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        for(int i=0;i<prices.size()-1;i++)
        {
            int t=prices[i+1]-prices[i];
            if(t>0) ans+=t;
            else continue;
        }
        return ans;
    }
};
