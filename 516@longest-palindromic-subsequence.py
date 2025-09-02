class Solution:
    def longestPalindromeSubseq(self, s: str) -> int:
        l=len(s)
        m=[0]*l
        m[-1]=1
        for i in range(l-2,-1,-1):
            m1=[0]*l
            m1[i]=1
            for j in range(i+1,l):
                if s[i]==s[j]: m1[j]=2+m[j-1]
                else: m1[j]=max(m1[j-1],m[j])
            m=m1
        return m[-1]