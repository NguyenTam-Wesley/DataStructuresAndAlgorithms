// https://www.hackerearth.com/practice/algorithms/sorting/heap-sort/practice-problems/

#include <iostream>
using namespace std;

// Function to heapify a subtree rooted at index i of size n
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Print the array after each iteration
        cout << "Array after iteration: ";
        for (int j = 0; j < n; ++j) {
            cout << arr[j] << " ";
        }
        cout << endl;

        heapify(arr, n, largest);
    }
}

// Function to perform Heap Sort and print array after each iteration
void heapSort(int arr[], int n) {
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; --i) {
        heapify(arr, n, i);
    }

    // Extract elements from the heap one by one
    for (int i = n - 1; i > 0; --i) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // Call heapSort function to sort the array and print after each iteration
    heapSort(arr, n);

    cout << "\nArray after sorting: \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
