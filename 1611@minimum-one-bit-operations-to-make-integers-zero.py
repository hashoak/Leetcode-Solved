class Solution(object):
    def minimumOneBitOperations(self, n):
        if not n: return 0
        x=pow(2,int(log(n)/log(2)))
        ans=0
        m=1
        while x:
            if x<=n:
                n-=x
                ans+=m*2*x
                m=-m
            x/=2
        if m==-1: ans-=1
        return ans