class Solution {
public:
    bool isNumber(string s) {
        string decimal="([-+]?(([0-9]+\\.[0-9]*)|(\\.[0-9]+)))";
        string integer="([-+]?[0-9]+)";
        regex number("("+decimal+"|"+integer+")([eE]"+integer+")?");
        smatch m;
        bool x=regex_match(s,m,number);
        cout<<m[0]<<"\n";
        return x;
    }
};