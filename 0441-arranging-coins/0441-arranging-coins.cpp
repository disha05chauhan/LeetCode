class Solution {
public:
    int arrangeCoins(int n) {
        if(n==0)return 0;
      long  int i=1;
       long int total=0;
        while(1){
            total=(i*(i+1))/2;
            if(total>n)return --i;
            i++;
        }
      
    }
};