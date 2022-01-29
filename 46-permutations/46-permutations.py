from itertools import permutations
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        perm=list(permutations(nums))
        # for i in list(perm):
        #     print(i)
        perm=list(perm)
        return perm