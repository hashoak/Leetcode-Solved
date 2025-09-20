class MyCalendarThree {
    vector<pair<int,int>> v;
    int m;

public:
    MyCalendarThree() {
        m=0;
    }
    
    int book(int s,int e)
    {
        pair<int,int> p(s,e);
        auto mid=v.insert(upper_bound(v.begin(),v.end(),p),p);
        vector<int> vm;
        for(auto i=v.begin();i<mid;i++) if(i->second>s) vm.insert(upper_bound(vm.begin(),vm.end(),i->second),i->second);
        for(auto i=mid;i!=v.end() && i->first<e;i++)
        {
            while(!vm.empty() && *vm.begin()<=i->first) m=max(m,int(vm.size())),vm.erase(vm.begin());
            vm.insert(upper_bound(vm.begin(),vm.end(),i->second),i->second);
        }
        m=max(m,int(vm.size()));
        return m;
    }
};