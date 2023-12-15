// https://www.hackerearth.com/practice/algorithms/sorting/bucket-sort/tutorial/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to perform Bucket Sort and print array after each iteration
void bucketSort(float arr[], int n) {
    // Create buckets vector
    vector<float> buckets[100];

    // Put elements into respective buckets
    for (int i = 0; i < n; ++i) {
        int bucket_index = n * arr[i];
        buckets[bucket_index].push_back(arr[i]);
    }

    // Sort individual buckets
    for (int i = 0; i < n; ++i) {
        sort(buckets[i].begin(), buckets[i].end());

        // Print the array after each iteration
        cout << "Array after iteration: ";
        for (float val : buckets[i]) {
            cout << val << " ";
        }
        cout << endl;
    }

    // Merge the buckets into the original array
    int index = 0;
    for (int i = 0; i < n; ++i) {
        for (float val : buckets[i]) {
            arr[index++] = val;
        }
    }
}

int main() {
    float arr[] = {0.42, 0.32, 0.33, 0.52, 0.37, 0.47, 0.51};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // Call bucketSort function to sort the array and print after each iteration
    bucketSort(arr, n);

    cout << "\nArray after sorting: \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}