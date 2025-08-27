class Solution {
public:
    int trap(vector<int>& h)
    {
        int n=h.size(),ans=0,c;
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            while(!s.empty() and h[s.top()]<h[i])
            {
                c=s.top();
                s.pop();
                if(s.empty()) break;
                int d=i-s.top()-1;
                ans+=(min(h[s.top()],h[i])-h[c])*d;
            }
            s.push(i);
        }
        return ans;
    }
};