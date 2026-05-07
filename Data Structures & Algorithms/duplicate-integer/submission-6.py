class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        obj={}
        for num in nums:
            obj[num]=obj.get(num,0)+1;
        for num in nums:
            if obj[num]>1:
                return True;
        return False;