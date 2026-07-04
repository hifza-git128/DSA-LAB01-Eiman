// Abiha Ehtisham, CMS:528907
#include <iostream>
#include <vector>
using namespace std;

// Function to find all the indices of array
vector<int> findIndices(const vector<int>& arr, int key) {
    vector<int> indices;
    for (int i = 0; i < (int)arr.size(); i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    int n, key;

    // Take array input from user
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    if (n > 0) {
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    // Take key input from user
    cout << "Enter key to search: ";
    cin >> key;

    // Find all indices
    vector<int> result = findIndices(arr, key);
    // Results that would be displayed on screen, deneding upon the user input. 
    if (result.empty()) {
        cout << "No indices found (key not present or array is empty)" << endl;
    } else {
        cout << "Key found at indices: ";
        for (int idx : result) {
            cout << idx << " ";
        }
        cout << endl;
    }

    return 0;
}
