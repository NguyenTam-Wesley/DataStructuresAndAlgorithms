// https://www.hackerearth.com/practice/algorithms/searching/binary-search/tutorial/

#include <iostream>
using namespace std;

// Function to perform Binary Search and print the number of iterations
int binarySearch(int arr[], int left, int right, int key) {
    int iterations = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        iterations++;

        if (arr[mid] == key) {
            cout << "Number of iterations: " << iterations << endl;
            return mid; // Return index if key is found
        }

        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << "Number of iterations: " << iterations << endl;
    return -1; // Return -1 if key is not found in the array
}

int main() {
    int arr[] = {2, 3, 5, 8, 10, 12, 17, 25, 42, 99};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 17;

    cout << "Array before searching: \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // Call binarySearch function to search for the key and print the number of iterations
    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1) {
        cout << "\nKey found at index " << result << ".\n";
    } else {
        cout << "\nKey not found in the array.\n";
    }

    return 0;
}
