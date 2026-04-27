#include <bits/stdc++.h>
using namespace std;

const int CHAR = 256;

// O(n) time | O(1) space — single pass using first-index array
// Better than naive O(n^2) and the two-pass O(n) "Better" approach
int leftMost(string &str) {
    int fIndex[CHAR];
    fill(fIndex, fIndex + CHAR, -1);
    int res = INT_MAX;

    for (int i = 0; i < (int)str.length(); i++) {
        int fi = fIndex[str[i]];
        if (fi == -1)
            fIndex[str[i]] = i;
        else
            res = min(res, fi);
    }
    return (res == INT_MAX) ? -1 : res;
}

int main() {
    string str = "geeksforgeeks";
    cout << "Index of leftmost repeating character:" << endl;
    cout << leftMost(str) << endl;
    return 0;
}
