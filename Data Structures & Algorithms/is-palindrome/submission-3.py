class Solution:
    def isPalindrome(self, s: str) -> bool:
        l_pointer, r_pointer = 0, len(s)-1

        while l_pointer < r_pointer:
            while l_pointer < r_pointer and not self.isAlphaNumeric(s[l_pointer]):
                l_pointer += 1
            while l_pointer < r_pointer and not self.isAlphaNumeric(s[r_pointer]):
                r_pointer -= 1
            
            if s[l_pointer].lower() != s[r_pointer].lower():
                return False

            l_pointer, r_pointer = l_pointer + 1, r_pointer - 1
        return True
    
    def isAlphaNumeric(self, char) -> bool:
        return (ord('A') <= ord(char) <= ord('Z') or
                ord('a') <= ord(char) <= ord('z') or
                ord('0') <= ord(char) <= ord('9'))
