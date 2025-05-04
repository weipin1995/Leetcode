#include <iostream>
#include "TwoSum.h"

void runTwoSumExample(const std::vector<int>& nums, int target, const std::string& label) {
    TwoSum solver;
    std::vector<int> result = solver.twoSum(const_cast<std::vector<int>&>(nums), target);

    std::cout << "=== " << label << " ===\n";
    std::cout << "Input: [ ";
    for (int num : nums) std::cout << num << " ";
    std::cout << "], target = " << target << "\n";

    if (!result.empty()) {
        std::cout << "Output: [ " << result[0] << ", " << result[1] << " ]\n\n";
    }
    else {
        std::cout << "Output: No valid pair found.\n\n";
    }
}

int main() {
    // nums = [2,7,11,15], target = 9
    std::vector<int> example1_nums = {2, 7, 11, 15};
    int example1_target = 9;

    // nums = [3,2,4], target = 6
    std::vector<int> example2_nums = {3, 2, 4};
    int example2_target = 6;

    // nums = [3,3], target = 6
    std::vector<int> example3_nums = {3, 3};
    int example3_target = 6;

    runTwoSumExample(example1_nums, example1_target, "Example 1");
    runTwoSumExample(example2_nums, example2_target, "Example 2");
    runTwoSumExample(example3_nums, example3_target, "Example 3");

    return 0;
}