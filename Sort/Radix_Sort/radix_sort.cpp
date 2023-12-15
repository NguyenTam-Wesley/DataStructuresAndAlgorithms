// https://www.hackerearth.com/practice/algorithms/sorting/radix-sort/tutorial/

#include <iostream>
#include <vector>
using namespace std;

// Function to find the maximum value in arr[]
int getMax(int arr[], int n) {
    int max_value = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }
    return max_value;
}

// Function to perform counting sort based on digit at exp position
void countingSort(int arr[], int n, int exp) {
    vector<int> output(n), count(10, 0);

    for (int i = 0; i < n; ++i) {
        count[(arr[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; ++i) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; --i) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; ++i) {
        arr[i] = output[i];

        // Print the array after each iteration
        cout << "Array after iteration: ";
        for (int j = 0; j < n; ++j) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}

// Function to perform Radix Sort and print array after each iteration
void radixSort(int arr[], int n) {
    int max_value = getMax(arr, n);

    for (int exp = 1; max_value / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);
    }
}

int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // Call radixSort function to sort the array and print after each iteration
    radixSort(arr, n);

    cout << "\nArray after sorting: \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
