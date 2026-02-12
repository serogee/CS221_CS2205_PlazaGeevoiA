#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    // Dynamic, or can be static instead
    int* arr = new int[n]; 

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool hasDuplicate = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                hasDuplicate = true;
                break;
            }
        }
        if (hasDuplicate) {
            break;
        }
    }

    if (hasDuplicate) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    delete[] arr; 
    return 0; // Success yaaa
}