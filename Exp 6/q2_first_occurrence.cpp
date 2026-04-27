#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int x) {
    int l = 0, r = n - 1, res = -1;

    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == x) {
            res = mid;
            r = mid - 1;
        }
        else if (arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return res;
}

int main() {
    int arr[] = {1,2,2,2,3};
    int n = 5, x = 2;
    cout << firstOcc(arr, n, x);
}
