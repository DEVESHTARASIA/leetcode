class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        ans = []
        for i in range(len(nums)):
            if (target - nums[i]) in seen.keys():
                ans.append(i)
                ans.append(seen[target-nums[i]])
            else:
                seen[nums[i]] = i

        return ans
