// https://www.hackerearth.com/practice/algorithms/sorting/selection-sort/visualize/

#include <iostream>
using namespace std;

// Function to perform Selection Sort and print array after each iteration
void selectionSort(int arr[], int n) {
    for (int i = n - 1; i > 0; --i) {
        int max_index = 0;
        // Find the index of the maximum element in the unsorted part
        for (int j = 1; j <= i; ++j) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }
        // Swap the found maximum element with the last element of unsorted part
        swap(arr[max_index], arr[i]);

        // Print the array after each iteration
        cout << "Array after iteration " << n - i << ": ";
        for (int k = 0; k < n; ++k) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // Call selectionSort function to sort the array and print after each iteration
    selectionSort(arr, n);

    cout << "\nArray after sorting: \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
