class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        maxShifts = len(s)
        print(maxShifts)
        newString = s 
        for i in range(maxShifts) :
            newString = self.shiftString(newString)
            if newString == goal :
                return True 
        return False
    def shiftString(self , s: str) -> str :
        s += s[0]
        s = s[1:]
        return s