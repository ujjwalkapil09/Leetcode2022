class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        min=0
        max=num
        mid=(min+max)//2
        while(min<=max):
            if(mid*mid==num):
                return True
            elif(mid*mid<num):
                min=mid+1
            elif(mid*mid>num):
                max=mid-1
            mid=(min+max)//2
        return False