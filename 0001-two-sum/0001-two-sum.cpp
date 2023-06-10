class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec;
        int len=nums.size();
        for (int i=0;i<=len-1;i++){
            for (int j=i+1;j<=len-1;j++)
                if(nums[i]+nums[j]==target){
                   vec.push_back(i);
                    vec.push_back(j);
                    return vec;
                }
        }
        return vec;
    }
};