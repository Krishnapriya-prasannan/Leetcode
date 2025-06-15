class Solution:
    def reverseWords(self, s: str) -> str:
        n=len(s)
        i=0
        words=[]
        while i<n and s==' ':
            i+=1
        while i<n:
            word=""
            while i<n and s[i]!=' ':
                word+=s[i]
                i+=1
            
            if word:
                words.append(word)
            while i<n and s[i]==' ':
                i+=1
        result=""
        for k in range(len(words)-1,-1,-1):
            result+=words[k]
            if k!=0:
                result+=' '
        return result
