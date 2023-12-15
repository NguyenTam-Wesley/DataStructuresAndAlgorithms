// https://www.hackerearth.com/practice/algorithms/sorting/quick-sort/visualize/

#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to partition the array and return the pivot index
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Pivot element
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Function to perform Quick Sort and print array after each iteration
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);

        // Print the array after each iteration
        cout << "Array after iteration: ";
        for (int i = low; i <= high; ++i) {
            cout << arr[i] << " ";
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

    // Call quickSort function to sort the array and print after each iteration
    quickSort(arr, 0, n - 1);

    cout << "\nArray after sorting: \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
