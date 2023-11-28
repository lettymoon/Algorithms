class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        NumsMap = {}

        for i, n in enumerate(nums):
            diff = target - n
            if diff in NumsMap:
                return [NumsMap[diff], i]
            NumsMap[n] = i
