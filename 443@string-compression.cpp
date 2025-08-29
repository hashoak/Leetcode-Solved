class Solution {
public:
    int compress(vector<char>& c) {
        int p=0,n=c.size(),ans=0;
        for(int i=0;i<n;) {
            while(i<n && c[i]==c[p]) i++;
            c[ans++]=c[p];
            if(i-p>1)
                for(auto d:to_string(i-p))
                    c[ans++]=d;
            p=i;
        }
        return ans;
    }
};