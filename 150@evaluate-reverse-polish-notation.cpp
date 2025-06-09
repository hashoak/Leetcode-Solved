class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int> s;
        for(int i=0;i<t.size();i++)
        {
            if(t[i].size()>1 || (t[i][0]>='0' && t[i][0]<='9'))
                s.push(stoi(t[i]));
            else
            {
                int op2=s.top();
                s.pop();
                int op1=s.top();
                s.pop();
                if(t[i]=="+") s.push(op1+op2);
                else if(t[i]=="-") s.push(op1-op2);
                else if(t[i]=="*") s.push(op1*op2);
                else s.push(op1/op2);
            }
        }
        return s.top();
    }
};