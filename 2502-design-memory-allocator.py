class Allocator(object):

    def __init__(self, n):
        self.n = n
        self.v = [0 for i in range(n)]
        

    def allocate(self, size, mID):
        free = 0
        ind = 0
        for i in range(0, self.n):
            if free == 0: ind = i
            elif (free >= size): break
            
            if(self.v[i] == 0): free+=1
            else: free = 0

        if(free >= size):
            for j in range(ind, ind + size):
                self.v[j] = mID

        return -1 if free < size else ind

    def free(self, mID):
        cnt = 0
        for i in range(0, self.n):
            if (self.v[i] == mID):
                self.v[i] = 0
                cnt += 1
        return cnt
        


# Your Allocator object will be instantiated and called as such:
# obj = Allocator(n)
# param_1 = obj.allocate(size,mID)
# param_2 = obj.free(mID)
