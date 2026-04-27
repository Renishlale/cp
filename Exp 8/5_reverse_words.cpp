#include <bits/stdc++.h>
using namespace std;

// O(n) time | O(n) space — cleaner vector-based approach
// Avoids manual char array manipulation of the naive approach
void reverseWords(string s) {
    vector<string> tmp;
    string str = "";

    for (int i = 0; i < (int)s.length(); i++) {
        if (s[i] == ' ') {
            tmp.push_back(str);
            str = "";
        } else {
            str += s[i];
        }
    }
    // Add the last word
    tmp.push_back(str);

    // Print words from last to first
    for (int i = tmp.size() - 1; i > 0; i--)
        cout << tmp[i] << " ";
    cout << tmp[0] << endl;
}

int main() {
    string s = "Welcome to MIT";
    reverseWords(s);
    return 0;
}
