/*
1. Two Sum

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.


Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]


Constraints:
2 <= nums.length <= 10^4
-10^9 <= nums[i] <= 10^9
-10^9 <= target <= 10^9
Only one valid answer exists.


Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> num_map;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (num_map.count(complement)) {
                return { num_map[complement], i };
            }

            num_map[nums[i]] = i;
        }

        return{};
    }
};

void runTwoSumExample(vector<int>& nums, int target, const string& label) {
    Solution solver;
    vector<int> result = solver.twoSum(nums, target);

    cout << "=== " << label << " ===\n";
    cout << "Input: [ ";
    for (int num : nums) cout << num << " ";
    cout << "], target = " << target << "\n";

    if (!result.empty()) {
        cout << "Output: [ " << result[0] << ", " << result[1] << " ]\n\n";
    }
    else {
        cout << "Output: No valid pair found.\n\n";
    }
}

int main() {
    vector<int> example1_nums = { 2, 7, 11, 15 };
    int example1_target = 9;

    vector<int> example2_nums = { 3, 2, 4 };
    int example2_target = 6;

    vector<int> example3_nums = { 3, 3 };
    int example3_target = 6;

    runTwoSumExample(example1_nums, example1_target, "Example 1");
    runTwoSumExample(example2_nums, example2_target, "Example 2");
    runTwoSumExample(example3_nums, example3_target, "Example 3");

    return 0;
}