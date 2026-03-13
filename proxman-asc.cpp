#include <iostream>
using namespace std;

// Function to sort array in ascending order
void PROXMAN(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Numbers already available in the program
    int arr[] = {8, 3, 5, 2, 9};

    int n = 5;

    PROXMAN(arr, n);

    cout << "Numbers in ascending order:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}