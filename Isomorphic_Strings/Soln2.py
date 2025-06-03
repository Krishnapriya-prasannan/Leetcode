
class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s)!=len(t):
            return False
        st={}
        ts={}
        for chs,cht in zip(s,t):
            if chs in st:
                if st[chs]!=cht:
                    return False
            else:
                st[chs]=cht
            if cht in ts:
                if ts[cht]!=chs:
                    return False
            else:
                ts[cht]=chs
        return True
"""
How it works:

It uses 2 dictionaries st and ts which maps characters in s to t and t to s respectively if both s and t have same length.
Inside for loop it takes each character one form s and other from t , and check one to one mapping.
If any of one fails, its not isomorphic else isomorphic.
"""
