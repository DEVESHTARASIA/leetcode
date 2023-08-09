class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> seen;
        for(int i = 0; i < nums.size(); i++) {
            if(seen.find(target - nums[i]) != seen.end()) {
                ans.push_back(i);
                ans.push_back(seen[target - nums[i]]);
                return ans;
            }
            else {
                seen.insert({nums[i],i});
            }
        }
        return ans;
    }
};
