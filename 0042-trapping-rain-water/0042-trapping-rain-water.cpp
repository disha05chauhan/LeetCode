class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
         vector<int>left;
        vector<int>right;
        int ml=height[0],mr=height[n-1];
        for(int i=0;i<n;i++){
            left.push_back(ml);
            if(ml<height[i])ml=height[i];
        }
         for(int i=n-1;i>=0;i--){
            right.push_back(mr);
            if(mr<height[i])mr=height[i];
        }
        int cap=0;
        for(int i=0;i<n;i++){
            int Min=min(left[i],right[n-1-i]);
            if((Min-height[i])>0)cap=cap+(Min-height[i]);
        }
        return cap;
    
    
    }
};