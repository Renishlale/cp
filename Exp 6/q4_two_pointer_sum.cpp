#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,6};
    int n = 5, X = 6;

    int l = 0, r = n - 1;

    while (l < r) {
        int sum = arr[l] + arr[r];

        if (sum == X) {
            cout << arr[l] << " " << arr[r];
            return 0;
        }
        else if (sum < X) l++;
        else r--;
    }

    cout << "No Pair";
}
