# https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums = nums1 + nums2
        nums.sort()
        med_idx = len(nums)//2
        if len(nums)%2 == 0:
            med = (nums[med_idx - 1] + nums[med_idx]) / 2.0
        else:
            med = nums[med_idx]
        return med
