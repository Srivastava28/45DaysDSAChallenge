class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        int n=nums.size();
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it: mp)
        {
            if(it.second ==1)
            continue;
            else
            ans=it.first;
        }
        return ans;
    }
};
