#include <iostream>
#include <algorithm>
using namespace std;

int secondLargestElement(int arr[], int n) {
    if (n < 2)
        return -1;

    sort(arr, arr + n);

    int large = arr[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != large)
            return arr[i];
    }

    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Second largest element: "<< secondLargestElement(arr, n);

    return 0;
}
