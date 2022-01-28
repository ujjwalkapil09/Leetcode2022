class Solution:
    def numTrees(self, n: int) -> int:
        num=1
        tc=n
        den=n
        u=2*n
        while(tc):
            tc=tc-1
            num=num*u
            if(tc>0):
                den=den*tc
            u=u-1
        ans=num/(den*(n+1))
        return int(ans)
        