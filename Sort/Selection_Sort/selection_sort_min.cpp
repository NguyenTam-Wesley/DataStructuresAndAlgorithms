#include <iostream>
using namespace std;

// Function to perform Selection Sort and print array after each iteration
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        // Find the minimum element in the unsorted part
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(arr[i], arr[min_index]);

        // Print the array after each iteration
        cout << "Array after iteration " << i + 1 << ": ";
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
