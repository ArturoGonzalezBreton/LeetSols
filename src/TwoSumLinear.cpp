#include "../include/TwoSumLinear.hpp"

using namespace std;

/**
 * @brief Given an array of integers nums and an integer target,
 * return indices of the two numbers such that they add up to
 * target. You may assume that each input would have exactly 
 * one solution, and you may not use the same element twice.
 * TIME COMPLEXITY: O(n).
 * @param nums array of integers
 * @param target target sum
 * @return positions of the array whose values sum target.
 */

vector<int> TwoSumLinear::twoSum(vector<int> &nums, int target) {

    unordered_map<int,int> mp;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int val = target - nums[i];
        if (mp.find(val) != mp.end()) 
            return {i, mp[val]};
        mp[nums[i]] = i;
    }
    return {};
}
    