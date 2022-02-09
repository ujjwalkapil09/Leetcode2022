class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        l=[]
        le=len(needle)
        if(le==0):
            return 0
        for i in range(0,len(haystack)):
            l.append(haystack[i:i+le])
        if(needle in l):
            return l.index(needle)
        else:
            return -1
        return 2;