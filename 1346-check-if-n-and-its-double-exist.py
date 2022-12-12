class Solution(object):
    def checkIfExist(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """

        # Creating an empty dictionary
        dict1 = {}
        cnt = 0
        for x in arr:
            if(x != 0):
                if(x in dict1):
                    dict1[x] += 1
                else:
                    dict1[x] = 1
            else: cnt+=1
        if(cnt >= 2): return True
        for x in arr:
            if(x*2 in dict1): return True
        return False
