class Solution(object):
    def longestPalindrome(self, s):
        l=len(s)
        m,mx,my=0,0,0
        for i in range(l):
            x,y=i,i-1
            while x-1>=0 and y+1<l and s[x-1]==s[y+1]: x-=1;y+=1
            if y-x+1>m: m=y-x+1;mx=x;my=y
            x,y=i,i
            while x-1>=0 and y+1<l and s[x-1]==s[y+1]: x-=1;y+=1
            if y-x+1>m: m=y-x+1;mx=x;my=y
        return s[mx:my+1]
        