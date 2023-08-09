class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        var seen = HashMap<Int,Int>()
        var ans = IntArray(2)
        for (i in nums.indices) {
            var complement: Int = target - nums[i]
            if (seen.containsKey(complement)) {
                ans.set(0,seen[complement]!!) //!! Not null assertion operator
                ans.set(1,i)
                break
            }
            else {
                seen.put(nums[i],i)
            }
        }

        return ans
    }
}
