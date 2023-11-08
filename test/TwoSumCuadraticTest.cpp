#include "../include/TwoSumCuadratic.hpp"
#include "gtest/gtest.h"

using namespace std;

TEST(TwoSumCuadraticTest, TwoSum) {

    TwoSumCuadratic tsc;

    vector<int> nums;
    nums.push_back(3);
    nums.push_back(4);
    vector<int> expected = {0,1};
    vector<int> result = tsc.twoSum(nums, 7);

    EXPECT_EQ(expected, result);
}