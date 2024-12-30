class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        l = [[], []]
        nums1 = set(nums1)
        nums2 = set(nums2)
        for i in nums1:
            if i not in nums2:
                l[0].append(i)
        for j in nums2:
            if j not in nums1:
                l[1].append(j)
        return l
        