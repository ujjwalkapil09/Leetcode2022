class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        nums=set(nums)
        nums=list(nums)
        nums.sort()
        if(nums[0]>1 or nums[len(nums)-1]<1):
            return 1
        i=1
        j=0
        for j in range(len(nums)):
            if(nums[j]>0):
                break
        while(True):
            if(j<len(nums) and i==nums[j]):
                i+=1
                j+=1
            else:
                return i
        return i;
        