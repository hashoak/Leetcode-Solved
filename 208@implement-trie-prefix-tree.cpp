class Trie {
    struct Node {
        map<char,Node*> links;
        bool end;
    };

    Node* root;
    
public:
    Trie() {
        root=new Node();
    }
    
    void insert(string word) {
        Node* t=root;
        for(char i:word) {
            if(!t->links[i]) t->links[i]=new Node();
            t=t->links[i];
        }
        t->end=1;
    }
    
    bool search(string word) {
        Node* t=root;
        for(char i:word) {
            if(!t->links[i]) return 0;
            t=t->links[i];
        }
        return t->end;
    }
    
    bool startsWith(string prefix) {
        Node* t=root;
        for(char i:prefix) {
            if(!t->links[i]) return 0;
            t=t->links[i];
        }
        return 1;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */