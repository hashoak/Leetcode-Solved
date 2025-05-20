class Solution:
    def longestCommonSubsequence(self, s1: str, s2: str) -> int:
        l1=len(s1)
        l2=len(s2)
        if(l1<l2):
            t=s1;s1=s2;s2=t
            t=l1;l1=l2;l2=t
        m=[0]*(l1+1)
        for i in range(1,l1+1):
            m1=[0]*(l2+1)
            for j in range(1,l2+1):
                if s1[i-1]==s2[j-1]: m1[j]=1+m[j-1]
                else: m1[j]=max(m1[j-1],m[j])
            m=m1
        return m1[-1]