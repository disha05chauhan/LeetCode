class StockSpanner {
public:
    stack<int>s;
        vector<int>vec;
        int count=-1;
    StockSpanner() {
        
    }
    
    int next(int price) {
     vec.push_back(price);

        count++;
       if(s.empty()){
           s.push(0);
           return 1;
       }
        
            while(s.empty()==false && vec[s.top()]<= price)s.pop();
            int span=(s.empty())?count+1:count-s.top();
        s.push(count);
        return span;
        
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */