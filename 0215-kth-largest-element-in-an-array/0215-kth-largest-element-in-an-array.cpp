class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> p(nums.begin(),nums.end());
        int count =0;
        while(count < k){
            if(count==k-1)return p.top();
            else p.pop();
            count++;
        }
        return -1;
        
        
    }
};