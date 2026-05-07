class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        obj={}
        for i,val in enumerate(nums):
            if target-val in obj:
                return [obj[target-val],i]
            obj[val]=i

        return []