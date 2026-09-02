class Solution(object):
    def removeElement(self, nums, val):
        self.nums = nums
        self.val = val
        while val in nums:
            nums.remove(val)
        length = len(self.nums)
        print(length)
        print(self.nums)
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        