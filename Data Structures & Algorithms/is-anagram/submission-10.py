class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        obj={}
        for i in s:
            obj[i]=obj.get(i,0)+1;

        for char in t:
            if char not in obj:
                return False;
            obj[char]-=1;
            if obj[char]<0:
                return False;

        for val in obj.values():
            if val!=0:
                return False
        
        return True;