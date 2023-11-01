class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        ans = ""
        max_length = min(len(word1), len(word2))
        for i in range(max_length):
            ans += word1[i]+word2[i]
        ans += word1[max_length:]
        ans += word2[max_length:]

        return ans