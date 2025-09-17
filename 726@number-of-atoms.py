class Solution(object):
    def countOfAtoms(self, f):
        r=re.findall(r"(\))(\d*)|(\()|([A-Z][a-z]*)(\d*)",f)
        l={}
        s=[]
        m=1
        # r=(a:')',b:'12',c:'(',d:'At',e:'23')
        for a,b,c,d,e in r[::-1]:
            if a:
                s.append(m)
                if b: m*=int(b)
            elif c:
                m=s[-1]
                s.pop()
            else:
                if e:
                    if d in l: l[d]+=int(e)*m
                    else: l[d]=int(e)*m
                else:
                    if d in l: l[d]+=m
                    else: l[d]=m

        l=sorted(l.items())
        ans=""
        for i in l:
            ans+=i[0]
            if(i[1]>1): ans+=str(i[1])
        return ans
        