class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>us;
          unordered_map<int,vector<string>>us1;
       
        for(int i=0;i<list1.size();i++){
            us[list1[i]]=i;
        }
        int m=INT_MAX;
       
        for(int i=0;i<list2.size();i++){
            if(us.find(list2[i])!=us.end())
                if(m>=(i+us[list2[i]])){
                    m=i+us[list2[i]];
                    us1[m].push_back(list2[i]);
                }
                
             }
        
           return us1[m];
    }
   
        
        };