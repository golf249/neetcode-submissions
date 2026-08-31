class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = "".join([char for char in s if char.isalnum()]).lower()
        #s = "".join(s.split())
        j = len(s)

        for i in range(int(len(s)/2)):
            if s[i] != s[j-1]:
                return False
            j = j - 1
        return True