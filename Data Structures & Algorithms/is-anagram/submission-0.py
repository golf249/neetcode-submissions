class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s_srt = sorted(list(s))
        t_srt = sorted(list(t))

        if len(s) != len(t):
            return False

        for i in range(len(s_srt)):
            if s_srt[i] != t_srt[i]:
                return False
        return True