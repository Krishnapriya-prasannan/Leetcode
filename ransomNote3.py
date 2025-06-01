from collections import Counter
class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        counter=Counter(magazine)
        for c in ransomNote:
            if counter[c]==0:
                return False
            else:
                counter[c]-=1
        return True
