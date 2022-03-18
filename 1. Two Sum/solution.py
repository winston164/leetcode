class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        match = {}
        for index, number in enumerate(nums):
            if number in match.keys():
                return [match[number], index]
            match[target - number] = index
