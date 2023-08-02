class Solution {
public:
    vector<vector<int>>vec;
    
    vector<vector<int>> permute(vector<int>& nums,int i=0) {
        if(i==nums.size()-1)vec.push_back(nums);
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            permute(nums,i+1);
            swap(nums[i],nums[j]);
        }
        return vec;
        
    }
};