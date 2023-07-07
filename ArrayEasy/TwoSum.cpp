class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n=nums.size();
        // vector<int>ans;
        // int flag=0;
        // for(int i=0;i<n;i++)
        // {
        //     ans.push_back(i);
        //     int t=target-nums[i];
                
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(nums[j]==t)
        //         {
        //             ans.push_back(j);
        //             flag=1;
        //         }
        //     }
        //     if(flag==0)
        //     {
        //         ans.pop_back();
        //     }
        //     if(flag==1)
        //     {
        //         break;
        //     }
            
        // }
        // return ans;

        unordered_map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int t=nums[i];
            int required = target-t;
            if(mpp.find(required) != mpp.end())
            {
                ans = {mpp[required],i};
            }
            mpp[t]=i;
        }

return ans;
    }
};
