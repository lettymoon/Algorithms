// 1. Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numsMap;
        vector<int> res; 

        for (int i = 0; i < nums.size(); i++) {
            int complem = target - nums[i];
            if (numsMap.find(complem) != numsMap.end()) {
                res.push_back(numsMap[complem]); 
                res.push_back(i); 
                return res; 
            }
            numsMap[nums[i]] = i; 
        }
        return res;
    }
};
