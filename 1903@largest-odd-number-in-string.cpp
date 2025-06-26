class Solution {
public:
    string largestOddNumber(string num) {
        int i=num.length();
        while(--i) if((num[i]-'0')%2) break;
        return num.substr(0,i+(num[i]-'0')%2);
    }
};