
class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        return [s.index(c) for c in s]==[t.index(c) for c in t]

"""
How it works:

s.index(c) gives the first position of character c in s.

If the pattern of positions is the same in both strings, then they are isomorphic.

"""
