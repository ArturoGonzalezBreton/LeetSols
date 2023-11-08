#include "../include/TwoSumCuadratic.hpp"

using namespace std;

/**
 * Given an array of integers nums and an integer target,
 * return indices of the two numbers such that they add up to
 * target. You may assume that each input would have exactly 
 * one solution, and you may not use the same element twice.
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
    