#include <iostream>
#include "ValidAnagram.h"

void runTwoSumExample(std::string s, std::string t, const std::string& label) {
    ValidAnagram solver;
    bool result = solver.isAnagram(s, t);

    std::cout << "=== " << label << " ===\n";
    std::cout << "s = \"" << s << "\", t = \"" << t << "\"\n";

    if (result) {
        std::cout << "Output: true\n\n";
    }
    else {
        std::cout << "Output:false\n\n";
    }
}

int main() {
    // s = "anagram", t = "nagaram"
    std::string example1_s = "anagram";
    std::string example1_t = "nagaram";

    // s = "rat", t = "car"
    std::string example2_s = "rat";
    std::string example2_t = "car";

    runTwoSumExample(example1_s, example1_t, "Example 1");
    runTwoSumExample(example2_s, example2_t, "Example 2");

    return 0;
}