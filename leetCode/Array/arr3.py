"""
LEETCODE
121. Best Time to Buy and Sell Stock
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
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
       