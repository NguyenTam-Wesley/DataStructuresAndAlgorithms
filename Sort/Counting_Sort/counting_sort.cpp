// https://www.hackerearth.com/practice/algorithms/sorting/counting-sort/tutorial/

#include <iostream>
#include <vector>
using namespace std;

// Function to perform Counting Sort and print array after each iteration
void countingSort(int arr[], int n) {
    int max_value = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }

    vector<int> count(max_value + 1, 0);

    for (int i = 0; i < n; ++i) {
        ++count[arr[i]];
    }

    int outputIndex = 0;
    for (int i = 0; i <= max_value; ++i) {
        while (count[i] > 0) {
            arr[outputIndex++] = i;
            --count[i];

            // Print the array after each iteration
            cout << "Array after iteration: ";
            for (int j = 0; j < n; ++j) {
                cout << arr[j] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // Call countingSort function to sort the array and print after each iteration
    countingSort(arr, n);

    cout << "\nArray after sorting: \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
