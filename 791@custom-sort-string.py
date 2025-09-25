class Solution(object):
    def customSortString(self, o, s):
        d={o[i]:i for i in range(len(o))}
        return ''.join(sorted(s,key=d.get))
        