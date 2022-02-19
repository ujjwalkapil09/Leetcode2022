class Solution:
    def getPermutation(self, n: int, k: int) -> str:
        r=""
        for i in range(1,n+1):
            s=str(i)
            r+=s
        perm=permutations(r)
        count=0
        t=""
        for i in list(perm):
            if(count==k-1):
                t+=''.join((i))
            count+=1;
        return t;
            