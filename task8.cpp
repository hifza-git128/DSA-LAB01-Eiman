#include <iostream>
#include <string>
using namespace std;

int findPattern(const string& text, const string& pattern) {

    // Edge case: for empty pattern
    if (pattern.empty()) return -1;
    int n = text.size();
    int m = pattern.size();
    if (m > n) return -1;

    // Naive Algorithm
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        // Matching character by character
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        // All characters matched, their first Ocuurrence is matched 
        if (j == m) return i;
    }
    return -1; 
}

int main() {
    string text, pattern;
    cout << "Enter text   : ";
    getline(cin, text);        
    cout << "Enter pattern: ";
    getline(cin, pattern);
    int result = findPattern(text, pattern);
    if (result == -1) {
        if (pattern.empty())
            cout << "Pattern is empty  returning -1" << endl;
        else
            cout << "Pattern not found  returning -1" << endl;
    } else {
        cout << "Pattern found at index: " << result << endl;
    }

    return 0;
}
