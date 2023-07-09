class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        int len=nums2.size();
        s.push(nums2[len-1]);
        vector<int>vec;
        vec.push_back(-1);
        for(int i=len-2; i>=0;i--){
        while(s.empty()==false && nums2[i]>=s.top())s.pop();
       int ng=(s.empty())?(-1):s.top();
            vec.push_back(ng);
        s.push(nums2[i]);
    }
        vector<int>vec1;
        reverse(vec.begin(),vec.end());
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<len;j++){
                if(nums1[i]==nums2[j])vec1.push_back(vec[j]);
            }
        }
        return vec1;
    }
};