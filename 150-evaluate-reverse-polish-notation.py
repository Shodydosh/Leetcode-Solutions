
class Solution(object):
    def evalRPN(self, tokens):
        """
        :type tokens: List[str]
        :rtype: int
        """
        s = tokens[len(tokens) - 1]
        tokens.pop()
        if(s not in '+-/*'): return int(s)
        else:
            a = self.evalRPN(tokens)
            b = self.evalRPN(tokens)
            if(s == "+"): return a + b
            elif(s == "*"): return a * b
            elif(s == "-"): return b - a
            else: return int(float(b)/a)
        
