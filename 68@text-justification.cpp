class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int mw)
    {
        vector<string> ans;
        int n=words.size(),i=0,j,l;
        int s,e,sp;
        string line,space;
        while(i<n)
        {
            j=mw+1;
            s=i,e=i;
            line="";
            while(i<n)
            {
                l=words[i].length();
                if(l<=j-1) e=i++,j-=l+1;
                else break;
            }
            if(i==n || s==e)
            {
                line+=words[s++];
                while(s<=e) line+=" "+words[s++];
                while(j-->0) line+=" ";
            }
            else
            {
                j+=(e-s);
                sp=((j)/(e-s));
                int x=j%(e-s);
                space=string(sp,' ');
                for(int k=0;k<x;k++) line+=words[s++]+space+" ";
                while(s<e) line+=words[s++]+space;
                line+=words[s];
            }
            ans.push_back(line);
        }
        return ans;
    }
};