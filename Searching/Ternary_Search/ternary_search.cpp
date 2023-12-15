// https://www.hackerearth.com/practice/algorithms/searching/ternary-search/tutorial/

#include <iostream>
using namespace std;

// Function to perform Ternary Search and print the number of iterations
int ternarySearch(int arr[], int left, int right, int key) {
    int iterations = 0;
    while (left <= right) {
        iterations++;

        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (arr[mid1] == key) {
            cout << "Number of iterations: " << iterations << endl;
            return mid1; // Return index if key is found at mid1
        }
        if (arr[mid2] == key) {
            cout << "Number of iterations: " << iterations << endl;
            return mid2; // Return index if key is found at mid2
        }

        if (key < arr[mid1]) {
            right = mid1 - 1;
        } else if (key > arr[mid2]) {
            left = mid2 + 1;
        } else {
            left = mid1 + 1;
            right = mid2 - 1;
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

    // Call ternarySearch function to search for the key and print the number of iterations
    int result = ternarySearch(arr, 0, n - 1, key);

    if (result != -1) {
        cout << "\nKey found at index " << result << ".\n";
    } else {
        cout << "\nKey not found in the array.\n";
    }

    return 0;
}
