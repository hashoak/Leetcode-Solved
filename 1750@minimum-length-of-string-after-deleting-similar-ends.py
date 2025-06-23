class Solution:
    def minimumLength(self, s: str) -> int:
        i,j=0,len(s)-1
        while i<j and s[i]==s[j]:
            while i<=j and s[i]==s[j]:
                j-=1
            while i<=j and s[i]==s[j+1]:
                i+=1
        return j-i+1
        