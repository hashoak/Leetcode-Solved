class TextEditor {
    stack<char> l,r;
    string s;
    void khalasi(int x=10)
    {
        if(!x || l.empty()) return;
        char c=l.top();
        l.pop();
        khalasi(x-1);
        s+=c;
        l.push(c);
    }
public:
    TextEditor() {
        ;
    }
    
    void addText(string t) {
        for(char i:t) l.push(i);
    }
    
    int deleteText(int k) {
        int x=0;
        while(k-- && !l.empty()) l.pop(),x++;
        return x;
    }
    
    string cursorLeft(int k) {
        while(k-- && !l.empty())
        {
            r.push(l.top());
            l.pop();
        }
        s="";
        khalasi();
        return s;
    }
    
    string cursorRight(int k) {
        while(k-- && !r.empty())
        {
            l.push(r.top());
            r.pop();
        }
        s="";
        khalasi();
        return s;
    }
};

/**
 * Your TextEditor object will be instantiated and called as such:
 * TextEditor* obj = new TextEditor();
 * obj->addText(text);
 * int param_2 = obj->deleteText(k);
 * string param_3 = obj->cursorLeft(k);
 * string param_4 = obj->cursorRight(k);
 */