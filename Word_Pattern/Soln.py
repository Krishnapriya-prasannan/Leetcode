class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words=s.split()
        if len(pattern)!=len(words):
            return False
        used=set()
        d={}
    
        for char,word in zip(pattern,words):
            
            if char not in d:
                if word in used:
                    return False

                d[char]=word
                used.add(word)
                
            else:
                if d[char]!=word:
                    return False
                
        return True
        
            
        
