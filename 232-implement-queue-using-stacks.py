class MyQueue(object):
    

    def __init__(self):
        self.input = []
        self.output = []
        
    def push(self, x):
        self.input.append(x)

    def pop(self):
        if(len(self.output)==0): 
            while len(self.input) != 0:
                self.output.append(self.input[-1])
                self.input.pop()

        x = self.output[-1]
        self.output.pop()
        return x

    def peek(self):
        if(len(self.output)==0): 
            while len(self.input) != 0:
                self.output.append(self.input[-1])
                self.input.pop()

        return self.output[-1]

    def empty(self):
        return len(self.output)==0 and len(self.input)==0


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.append(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()
