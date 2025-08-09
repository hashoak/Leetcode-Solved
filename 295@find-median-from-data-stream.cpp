class MedianFinder
{
private:
    int n;
    map<int,int> m;

public:
    MedianFinder() { n=0; }

    void addNum(int num)
    {
        if(m.find(num)==m.end()) m[num]=1;
        else m[num]++;
        n++;
    }
    
    double findMedian()
    {
        int x=0;
        map<int,int>::iterator it=m.begin();
        while((x+it->second)<=n/2 && it!=m.end())
        {
            // cout<<"Key: "<<it->first<<", Value: "<<it->second<<endl;
            x+=it->second;
            it++;
        }
        // cout<<n/2-x<<"\n";
        // cout<<"~Key: "<<it->first<<", Value: "<<it->second<<endl;
        if(n%2) return it->first;
        if(n/2==x) return float(it->first+(--it)->first)/2;
        return it->first;
        // if(n%2) return *next(s.begin(),n/2);
        // else return (float(*next(s.begin(),n/2-1))+float(*next(s.begin(),n/2)))/2;
        return 0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */