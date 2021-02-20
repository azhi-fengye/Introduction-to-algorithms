# 给定一个整数数组 nums和一个整数目标值 target，请你在该数组中找出 和为目标值 的那两个整数，并返回它们的数组下标。
#
# 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。
#
# 你可以按任意顺序返回答案。
#
# 示例 1：
#
# 输入：nums = [2,7,11,15], target = 9
# 输出：[0,1]
# 解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
# 示例 2：
#
# 输入：nums = [3,2,4], target = 6
# 输出：[1,2]
# 示例 3：
#
# 输入：nums = [3,3], target = 6
# 输出：[0,1]
#
# 提示：
#
# 2 <= nums.length <= 103
# -109 <= nums[i] <= 109
# -109 <= target <= 109
# 只会存在一个有效答案

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        self.nums = nums
        self.target = target
        for num in self.nums:
            num_index = self.nums.index(num)
            result = target - num
            if result in self.nums[num_index + 1:]:  # 此时只需要再去判断num以后的数就可以了 所以利用了列表的截取去选择这一段范围 因为列表截取为包含当前下标的，所以需要加一
                result_index = self.nums[num_index + 1:].index(result) + num_index + 1  # 如果找到后返回该值在原列表里面位置的下标 组成新列表即可
                return [num_index, result_index]
