class Solution(object):
    def findArray(self, p):
        for i in range(len(p)-1,0,-1): p[i]=p[i]^p[i-1]
        return p
        