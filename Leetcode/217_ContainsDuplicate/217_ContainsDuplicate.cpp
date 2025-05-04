#include <iostream>
#include "ContainsDuplicate.h"

void runTwoSumExample(const std::vector<int>& nums, const std::string& label) {
    ContainsDuplicate solver;
    bool result = solver.containsDuplicate(const_cast<std::vector<int>&>(nums));

    std::cout << "=== " << label << " ===\n";
    std::cout << "Input: [ ";
    for (int num : nums) std::cout << num << " ";
    std::cout << "]\n";

    if (result) {
        std::cout << "Output: true\n\n";
    }
    else {
        std::cout << "Output: false\n\n";
    }
}

int main() {
    // nums = [1,2,3,1]
    std::vector<int> example1_nums = {1, 2, 3, 1};

    // nums = [1,2,3,4]
    std::vector<int> example2_nums = {1, 2, 3, 4};

    // nums = [1,1,1,3,3,4,3,2,4,2]
    std::vector<int> example3_nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

    runTwoSumExample(example1_nums, "Example 1");
    runTwoSumExample(example2_nums, "Example 2");
    runTwoSumExample(example3_nums, "Example 3");

    return 0;
}