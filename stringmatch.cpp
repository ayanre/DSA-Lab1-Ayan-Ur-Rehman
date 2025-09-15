#include <iostream>
#include <string>
using namespace std;

int findSubstring(const string& text, const string& pattern) {
    //empty pattern returns 0
    if (pattern.empty()) return 0;

    int textLen = text.size();
    int patternLen = pattern.size();

    //compare substrings
    for (int i = 0; i <= textLen - patternLen; i++) {
        if (text.substr(i, patternLen) == pattern) {
            return i;
        }
    }

    return -1; // Not found
}

int main() {
    // --- Test Cases ---
    cout << findSubstring("DSA Lab", "DSA") << endl; // Pattern at beginning -> 0
    cout << findSubstring("DSA Lab", "Lab") << endl; // Pattern at end -> 6
    cout << findSubstring("DSA Lab", "test")  << endl; // Pattern not present -> -1
    cout << findSubstring("DSA Lab", "")      << endl; // Empty pattern -> 0
    return 0;
}