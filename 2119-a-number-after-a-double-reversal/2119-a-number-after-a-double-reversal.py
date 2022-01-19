class Solution:
    def isSameAfterReversals(self, num: int) -> bool:
        y=str(num)
        y=y[::-1]
        y=int(y)
        y=str(y)
        y=y[::-1]
        y=int(y)
        # print(
        if(y==num):
            return True
        else:
            return False