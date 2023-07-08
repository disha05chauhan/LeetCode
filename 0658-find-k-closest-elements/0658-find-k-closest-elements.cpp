class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
         if(x<=arr[0]){
           vector<int> vec1(arr.begin(),arr.begin()+k);
            return vec1;
        }
        int low=0;
        int high=arr.size()-1;
        int i;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==x){
                high=low+1;
                break;
            }
            else if(arr[mid]<x)low=mid+1;
            else high=mid-1;
        }
        if(low==high+1)swap(low,high);
       
        
        vector<int>vec;
       
        while(k && (low>=0 && high<arr.size())){
            int left=x-arr[low];
            int right=arr[high]-x;
            k--;
            if(left==right){
                vec.push_back(arr[low]);
               low--;
              
            }
                
           else if (left<right){
               vec.push_back(arr[low]);
               low--;
              
               
           }
            else{
                vec.push_back(arr[high]);
                high++;
                
            }
        }
              if(k!=0 && high==arr.size() && low>=0){
                  while(k){
                      vec.push_back(arr[low]);
                      low--;
                      k--;
                  }
              }
               if(k!=0 && low<0 && high<arr.size()){
                  while(k){
                      vec.push_back(arr[high]);
                      high++;
                      k--;
                  }
              }
        sort(vec.begin(),vec.end());
              return vec;
        
    }
};