class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size(),p=n,n2=s2.size();
        int i=0,j=0;
        int f[26]={0};
        for(auto i:s1) f[i-'a']++;
        for(auto &i:f) if(!i) i=-1;
        while(j<n2 and p) {
            // while(f[s2[j]-'a']==-1) j++;
            // i=j;
            // if(f[s2[j]-'a']>0) f[s2[j]-'a']--,j++,p--;
            // else if(f[s2[j]-'a']==0) {
            //     while(f[s2[i]-'a']) f[s2[i]-'a']++,i++,p++;
            // }
            // else {
            //     while(j<n2 && !f[s2[j]-'a']) j++;
            //     i=j;
            //     p=n;
            // }
            // cout<<i<<" "<<j<<" "<<p<<"\n";
            if(f[s2[j]-'a']>0) f[s2[j]-'a']--,j++,p--;
            else if(f[s2[i]-'a']!=-1) f[s2[i]-'a']++,i++,p++;
            else {
                while(j<n2 && f[s2[j]-'a']==-1) j++;
                i=j;
                p=n;
            }
        }
        // cout<<i<<" "<<j<<" "<<p<<"-\n";
        return p==0;
    }
};