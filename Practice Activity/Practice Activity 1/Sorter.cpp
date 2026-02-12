#include <iostream>

using namespace std;

int main() {
    int k, n;
    cout << "K and N: ";
    cin >> k >> n;
    
    int sequences[k][n];  
    int sizes[k];         
    
    for (int i = 0; i < k; i++) {
        cout << "Size of sequence " << i + 1 << ": ";
        cin >> sizes[i];
        cout << "Elements: ";
        for (int j = 0; j < sizes[i]; j++) {
            cin >> sequences[i][j];
        }
    }
    
    int totalElements = 0;
    for (int i = 0; i < k; i++) {
        totalElements += sizes[i];
    }
    
    int result[totalElements];
    
    for (int r = 0; r < totalElements; r++) {
        int chosenSeq = -1;
        for (int i = 0; i < k; i++) {
            if (sizes[i] > 0) {  
                if (chosenSeq == -1 || sequences[i][0] < sequences[chosenSeq][0]) {
                    chosenSeq = i;
                }
            }
        }
        
        result[r] = sequences[chosenSeq][0];
        
        for (int j = 0; j < sizes[chosenSeq] - 1; j++) {
            sequences[chosenSeq][j] = sequences[chosenSeq][j + 1];
        }
        sizes[chosenSeq]--;
    }

    cout << "Result: ";
    for (int i = 0; i < totalElements; i++) {
        cout << result[i];
        if (i < totalElements - 1) {
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}