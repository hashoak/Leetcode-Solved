class SmallestInfiniteSet {
    int p=1;
    set<int> s;
public:
    int popSmallest() {
        if(s.empty()) return p++;
        int x=*s.begin();
        s.erase(s.begin());
        return x;
    }
    
    void addBack(int n) {
        if(n<p) s.insert(n);
    }
};