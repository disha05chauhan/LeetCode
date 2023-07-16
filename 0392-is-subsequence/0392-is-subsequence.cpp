class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k=0;
        for(char i:t){
            if(k==s.size()) return true;
            if(i==s[k])k++;
        }
        if(k==s.size()) return true;
        return false;
    }
};