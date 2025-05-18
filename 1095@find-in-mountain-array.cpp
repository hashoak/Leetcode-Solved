/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int t, MountainArray &mount) {
        int p,s=0,e=mount.length()-1,m;
        while(1)
        {
            p=(s+e)/2;
            if(mount.get(p)<mount.get(p+1)) s=p+1;
            else if(mount.get(p-1)>mount.get(p)) e=p-1;
            else break;
        }

        if(mount.get(p)==t) return p;
        s=0,e=p-1;
        while(s<=e)
        {
            m=(s+e)/2;
            if(mount.get(m)<t) s=m+1;
            else if(mount.get(m)>t) e=m-1;
            else break;
        }
        if(s>e)
        {
            s=p+1,e=mount.length()-1;
            while(s<=e)
            {
                m=(s+e)/2;
                if(mount.get(m)>t) s=m+1;
                else if(mount.get(m)<t) e=m-1;
                else break;
            }
            if(s>e) return -1;
        }
        return m;
    }
};