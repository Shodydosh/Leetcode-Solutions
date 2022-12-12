class Solution(object):
    def judgeSquareSum(self, c):
        """
        :type c: int
        :rtype: bool
        """
        l = 0
        r = int(math.sqrt(c))
        while (l <= r):
            tmp = l*l + r*r

            if(tmp > c): r-=1
            elif(tmp < c): l+=1
            else: return True
        return False
