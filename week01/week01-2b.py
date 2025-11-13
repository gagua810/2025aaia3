#week01-2b.py 使用Python 的版本1 使用 .find()函式
#LeetCode 28.
#在haystack 乾稻草堆裡找到needle 針（大海撈針）
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)