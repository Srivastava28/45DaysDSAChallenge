class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // map<int,int>mp;
        // for(int i=0;i<nums.size();i++)
        // {
        //     mp[nums[i]]++;
        // }
        // int i=0;
        // for(auto it:mp)
        // {
        //     nums[i]=it.first;
        //     i++;
        // }
        // return i;


        set<int> st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        int k=st.size();
        int j=0;
        for(auto it:st)
        {
            nums[j++]=it;
        }
        return k;
    }
};
