#define PIS pair<int,string>

class SORTracker {
    struct min_cmp {
        bool operator()(const PIS& a,const PIS& b) {
            if(a.first==b.first) return a.second<b.second;
            return a.first>b.first;
        }
    };
    struct max_cmp {
        bool operator()(const PIS& a,const PIS& b) {
            if(a.first==b.first) return a.second>b.second;
            return a.first<b.first;
        }
    };
    priority_queue<PIS,vector<PIS>,min_cmp> l;
    priority_queue<PIS,vector<PIS>,max_cmp> r;
public:
    SORTracker() {}
    
    void add(string n,int s) {
        l.push({s,n}),r.push(l.top()),l.pop();
    }
    
    string get() {
        PIS ans(r.top());
        l.push(ans),r.pop();
        return ans.second;
    }
};

/**
 * Your SORTracker object will be instantiated and called as such:
 * SORTracker* obj = new SORTracker();
 * obj->add(name,score);
 * string param_2 = obj->get();
 */