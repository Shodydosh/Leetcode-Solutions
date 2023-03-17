class Trie {
public:
    Trie() {
        
    }
    vector<string> ans;
    
    void insert(string word) {
        ans.push_back(word);
    }
    
    bool search(string word) {
        for(auto x : ans)
                if(x == word) return 1;
        return 0;
    }
    
    bool startsWith(string prefix) {
        for(auto x : ans)
            if(x.substr(0, prefix.size()) == prefix) return 1;
        return 0;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
