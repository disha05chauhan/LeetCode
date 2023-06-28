class Solution {
public:
    struct myCmp{
        bool operator()(pair<int,int>p1,pair<int,int>p2){
            if(p1.second==p2.second)return p1.first<p2.first;
            return p1.second<p2.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        unordered_map<int,int>m;
        for(int i:nums)m[i]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,myCmp>pq(m.begin(),m.end());
        for(int i=0;i<k;i++){
            res.push_back(pq.top().first);
            pq.pop();
        }
        return res;
    }
};