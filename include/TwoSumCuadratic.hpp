#ifndef TWOSUMCUADRATIC_H
#define TWOSUMCUADRATIC_H

#include <vector>

using namespace std;

/**
 * @brief Given an array of integers nums and an integer target,
 * return indices of the two numbers such that they add up to
 * target. You may assume that each input would have exactly 
 * one solution, and you may not use the same element twice.
 * @param nums array of integers
 * @param target target sum
 * @return positions of the array whose values sum target.
 */

class TwoSumCuadratic {

public:

    vector<int> twoSum(vector<int> &nums, int target);
};

#endif