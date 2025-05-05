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
1 <= s.length, t.length <= 5 * 10^4
s and t consist of lowercase English letters.


Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
*/

#include "ValidAnagram.h"
#include <unordered_map>

bool ValidAnagram::isAnagram(std::string s, std::string t) {
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

    // if no solution is found, return an empty vector
    return true;
}