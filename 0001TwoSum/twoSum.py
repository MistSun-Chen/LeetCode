class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        num_value= []
        add = []
        for i,num in enumerate(nums):
            if num in num_value:
                return [add[num_value.index(num)],i]
            else:
                num_value.append(target - num)
                add.append(i)

        return [0,0]