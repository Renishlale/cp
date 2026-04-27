#include <iostream>
using namespace std;

int peak(int arr[], int n) {
    int l = 0, r = n - 1;

    while (l < r) {
        int mid = (l + r) / 2;
        if (arr[mid] < arr[mid+1])
            l = mid + 1;
        else
            r = mid;
    }
    return l;
}

int main() {
    int arr[] = {1,3,20,4,1};
    int n = 5;
    int idx = peak(arr, n);
    cout << "Index: " << idx << " Value: " << arr[idx];
}
