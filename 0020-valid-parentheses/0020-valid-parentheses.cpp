class Solution {
public:
    bool matching(char first,char second){
        if(first=='(')return (second==')');
        if(first=='{')return (second=='}');
        if(first=='[')return (second==']');
        return false;
    }
    bool isValid(string s) {
        stack<char> st;
        for(char i:s){
            if(i=='('||i=='{'||i=='[')st.push(i);
            else{
                if(st.empty()==true)return false;
                else if(matching(st.top(),i)==true)st.pop();
                else{
                    return false;
                }
            }
            
        }
        return(st.empty()==true);
    }
};