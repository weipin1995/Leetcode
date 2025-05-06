/*
242. Valid Anagram

Given two strings s and t, return true if t is an anagram of s, and false otherwise.


Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false


Constraints:
1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.


Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
*/

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<int, int> countS;

        if (s.length() != t.length()) {
            return false;
        }

        for (char c : s) {
            countS[c]++;
        }

        for (char c : t) {
            if (countS[c] <= 0) {
                return false;
            }
            countS[c]--;
        }

        return true;
    }
};

void runValidAnagramExample(string s, string t, const string& label) {
    Solution solver;
    bool result = solver.isAnagram(s, t);

    cout << "=== " << label << " ===\n";
    cout << "s = \"" << s << "\", t = \"" << t << "\"\n";

    if (result) {
        cout << "Output: true\n\n";
    }
    else {
        cout << "Output: false\n\n";
    }
}

int main() {
    string example1_s = "anagram";
    string example1_t = "nagaram";

    string example2_s = "rat";
    string example2_t = "car";

    runValidAnagramExample(example1_s, example1_t, "Example 1");
    runValidAnagramExample(example2_s, example2_t, "Example 2");

    return 0;
}
