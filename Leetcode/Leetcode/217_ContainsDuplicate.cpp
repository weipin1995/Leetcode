/*
217. Contains Duplicate

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.


Example 1:
Input: nums = [1,2,3,1]
Output: true

Explanation:
The element 1 occurs at the indices 0 and 3.


Example 2:
Input: nums = [1,2,3,4]
Output: false

Explanation:
All elements are distinct.


Example 3:
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true


Constraints:
1 <= nums.length <= 10^5
-10^9 <= nums[i] <= 10^9
*/

#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> uset;
        for (int i = 0; i < nums.size(); ++i) {
            if (uset.count(nums[i])) {
                return true;
            }

            uset.insert(nums[i]);
        }

        return false;
    }
};

void runContainsDuplicateExample(vector<int>& nums, const string& label) {
    Solution solver;
    bool result = solver.containsDuplicate(nums);

    cout << "=== " << label << " ===\n";
    cout << "Input: [ ";
    for (int num : nums) cout << num << " ";
    cout << "]\n";

    cout << "Output: " << (result ? "true" : "false") << "\n\n";
}

int main() {
    vector<int> example1_nums = { 1, 2, 3, 1 };
    vector<int> example2_nums = { 1, 2, 3, 4 };
    vector<int> example3_nums = { 1, 1, 1, 3, 3, 4, 3, 2, 4, 2 };

    runContainsDuplicateExample(example1_nums, "Example 1");
    runContainsDuplicateExample(example2_nums, "Example 2");
    runContainsDuplicateExample(example3_nums, "Example 3");

    return 0;
}