"""
LEETCODE
27. Remove Element
Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).
"""

class Solution(object):
    def removeElement(self, nums, val):
        i = 0
        count = 0
        while i < len(nums):
            if nums[i] == val:
                nums.remove(val)
                count+=1
            else:
                i+=1
            print(nums)

        # for j in range(len(nums)):
        #     if nums[j] != val:
        #         nums[i] = nums[j]
        #         nums[j] = nums[i]
        #         i += 1
        # return i
       