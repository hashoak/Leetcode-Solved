class BrowserHistory {
public:
    string *history;
    int m,p;
    BrowserHistory(string homepage) {
        history=new string[100];
        m=p=0;
        history[p]=homepage;
    }
    
    void visit(string url) {
        history[++p]=url;
        m=p;
    }
    
    string back(int steps) {
        p-=steps;
        if(p<0) p=0;
        return history[p];
    }
    
    string forward(int steps) {
        p+=steps;
        if(p>m) p=m;
        return history[p];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */