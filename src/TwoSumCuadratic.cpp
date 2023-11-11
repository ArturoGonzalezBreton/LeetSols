#include "../include/TwoSumCuadratic.hpp"

using namespace std;

/**
 * @brief Given an array of integers nums and an integer target,
 * return indices of the two numbers such that they add up to
 * target. You may assume that each input would have exactly 
 * one solution, and you may not use the same element twice.
 * * TIME COMPLEXITY: O(n^2).
 * @param nums array of integers
 * @param target target sum
 * @return positions of the array whose values sum target.
 */

vector<int> TwoSumCuadratic::twoSum(vector<int> &nums, int target) {

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (target - nums[i] == nums[j]) {
                return {i, j};                    
            }
        }
    }
    return {};

}
    