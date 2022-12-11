class Allocator {
    
public:
    int n;
    int v[1005] = {};
    int mem[1005] = {};
    Allocator(int n) {
        this->n = n;
    }
    
    int allocate(int size, int mID) {
        int free = 0;
        int index;
        for(int i=0; i<n; i++){
            if(free == 0) index = i;
            else if(free >= size) break;
            
            if(v[i] == 0) free++;
            else free = 0;
        }

        if(free>=size){
            for(int i=index; i<index + size; i++){
                v[i] = mID;
                mem[i] = 1;
            }
        }
        else return -1;
        return index;
    }
    
    int free(int mID) {
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(v[i] == mID){
                v[i] = 0;
                cnt++;
            }
        }
        return cnt;
    }
};

// [null, 0, 1, 2, 1, 3, 1, 6, 3, -1, 0]

/**
 * Your Allocator object will be instantiated and called as such:
 * Allocator* obj = new Allocator(n);
 * int param_1 = obj->allocate(size,mID);
 * int param_2 = obj->free(mID);
 */
