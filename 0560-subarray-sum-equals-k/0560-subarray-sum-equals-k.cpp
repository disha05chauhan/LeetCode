class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int count=0;
        
       int pre_sum=0;
        for(int i=0;i<nums.size();i++){
            pre_sum+=nums[i];
            if(pre_sum==k)count++;
            if(m.find(pre_sum -k)!=m.end())count=count+m[pre_sum-k];
            m[pre_sum]++;
        }
        return count;
    }
};