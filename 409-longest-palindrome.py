class Solution(object):
    def longestPalindrome(self, s):
        S = sum((count - count%2) for count in collections.Counter(s).values()) + 1
        return min(S, len(s))

        
