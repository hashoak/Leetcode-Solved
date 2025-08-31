class LFUCache(object):

    def __init__(self, cap):
        self.h={}   # {key:[freq,val]}
        self.f={}   # {freq:[list of keys]}
        self.mf=0
        self.cap=cap

    def insert(self, k, fk, val):
        self.h[k]=[fk,val]
        if fk not in self.f: self.f[fk]=[k]
        else: self.f[fk].append(k)

    def get(self, k):
        if not k in self.h: return -1
        fk=self.h[k][0]
        kl=self.f[fk]
        kl.remove(k)
        if not kl:
            self.f.pop(fk)
            if fk==self.mf: self.mf+=1
        self.insert(k,fk+1,self.h[k][1])
        return self.h[k][1]

    def put(self, k, val):
        if k in self.h: self.h[k][1]=val;self.get(k);return
        if len(self.h)==self.cap:
            kl=self.f[self.mf]
            self.h.pop(kl[0])
            kl.remove(kl[0])
            if not kl: self.f.pop(self.mf)
        self.mf=1
        self.insert(k,1,val)


# Your LFUCache object will be instantiated and called as such:
# obj = LFUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)