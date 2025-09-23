class Solution(object):
    def minWindow(self, s, t):
        d={}
        for i in t:
            if i not in d: d[i]=1
            else: d[i]+=1
        l,tl,i=len(s),len(t),0
        while i<l and s[i] not in d: i+=1
        if i: i-=1
        j=i
        m,mi,mj=l+1,0,-1
        while j<l:
            # print(d,m,mi,mj,tl)
            if s[j] in d:
                tl-=(d[s[j]]>0)
                d[s[j]]-=1
                while i<j and ((s[i] not in d) or (s[i] in d and d[s[i]]<0)):
                    if s[i] in d: d[s[i]]+=1
                    i+=1
                if (not tl) and j-i+1<m: m=j-i+1;mi=i;mj=j
            j+=1
        return s[mi:mj+1]