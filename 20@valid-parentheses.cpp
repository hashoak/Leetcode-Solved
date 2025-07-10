class Solution {
public:
    bool isValid(string s)
    {
        stack<char> st;
        for(auto i:s)
        {
            if(i=='(' || i=='{' || i=='[') st.push(i);
            else if(st.empty() || (i-st.top()!=1 && i-st.top()!=2)) return 0;
            else st.pop();
        }
        return st.empty();
    }
};