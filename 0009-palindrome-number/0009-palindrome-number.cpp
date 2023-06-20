class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
       long int num=x;
       long int rnum=0;
        while(num!=0){
            rnum=(rnum*10)+(num%10);
            num/=10;
        }
        if(x==rnum)return true;
        else return false;
        
        
    }
};