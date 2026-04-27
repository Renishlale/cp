#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
    if (l > r) return -1;
    int mid = (l + r) / 2;
    if (arr[mid] == x) return mid;
    if (arr[mid] > x) return binarySearch(arr, l, mid - 1, x);
    return binarySearch(arr, mid + 1, r, x);
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5, x = 3;
    int idx = binarySearch(arr, 0, n-1, x);

    if (idx != -1) {
        arr[idx] *= 3;
        cout << "Tripled Value: " << arr[idx];
    }
}
