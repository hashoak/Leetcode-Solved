class AllOne(object):

    def __init__(self):
        self.h={}   # {key:freq}
        self.f={}   # {freq:[list of keys]}
        self.minf=0
        self.maxf=0
        return

    def insert(self, k, fk):
        self.h[k]=fk
        if fk not in self.f: self.f[fk]=[k]
        else: self.f[fk].append(k)
        self.maxf=max(fk,self.maxf)

    def inc(self, k):
        if k not in self.h: self.insert(k,1);self.minf=1;return
        fk=self.h[k]
        kl=self.f[fk]
        kl.remove(k)
        if not kl:
            self.f.pop(fk)
            if fk==self.minf: self.minf+=1
            if fk==self.maxf: self.maxf+=1
        self.insert(k,fk+1)
        return

    def dec(self, k):
        fk=self.h[k]
        kl=self.f[fk]
        kl.remove(k)
        if not kl:
            self.f.pop(fk)
            if fk==self.minf:
                if fk>1: self.minf-=1
                else: self.minf=min(self.f.keys())
            if fk==self.maxf: self.maxf-=1
        if fk==1: self.h.pop(k)
        else: self.insert(k,fk-1)
        return

    def getMaxKey(self):
        # print("max:",self.maxf,self.f)
        if self.maxf<=0: return ""
        return self.f[self.maxf][-1]

    def getMinKey(self):
        # print("min:",self.minf,self.f)
        if self.minf<=0: return ""
        return self.f[self.minf][-1]


# Your AllOne object will be instantiated and called as such:
# obj = AllOne()
# obj.inc(key)
# obj.dec(key)
# param_3 = obj.getMaxKey()
# param_4 = obj.getMinKey()