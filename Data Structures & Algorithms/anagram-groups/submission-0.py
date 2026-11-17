class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        res = {}

        for s in strs:
            count = [0] * 26  # this is for each new word

            for c in s:
                count[ord(c) - ord("a")] += 1

            key = tuple(count)  # this is to convert an array to a tuple that can be stored as a key

            if key not in res:
                res[key] = []

            res[key].append(s)

        return list(res.values())

