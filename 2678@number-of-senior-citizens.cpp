class Solution {
public:
    int countSeniors(vector<string>& d) {
        int ans=0;
        for(string i:d) {
            int x=(i[11]-'0')*10+(i[12]-'0');
            if(x>60) ans++;
        }
        return ans;
    }
};