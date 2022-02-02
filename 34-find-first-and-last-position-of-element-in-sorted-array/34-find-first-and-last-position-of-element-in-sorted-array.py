class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        lis=[]
        nlist=[]
        if(target in nums):
            t=nums.index(target)
            nlist.append(t)
            for i in range(t+1,len(nums)):
            # print(nums[i])
                if(nums[i]==target):
                    nlist.append(i)
            if(len(nlist)>0):
                end=len(nlist)-1
                lis.append(nlist[0])
                lis.append(nlist[end])
        else:
            
            lis.append(-1)
            lis.append(-1)
        
            
        return lis