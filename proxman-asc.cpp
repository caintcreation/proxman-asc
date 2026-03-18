#include <iostream>
using namespace std;

// Function prototype for PROXMAN sorting algorithm
void PROXMAN(int arr[], int n);

int main() {
    // Student Information
    cout << "COSC 333 – Data Structures and Algorithms" << endl;
    cout << "Assignment: PROXMAN Sorting Algorithm (Ascending Order)" << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "Name: Emmanuel Maduvwe" << endl;
    cout << "Admission Number: EB3/68882/23" << endl;
    cout << "Course Unit: COSC 333 – Data Structures and Algorithms" << endl;
    cout << "========================================================" << endl << endl;
    
    int n;
    
    // Get the number of elements from user
    cout << "Enter the number of elements: ";
    cin >> n;
    
    // Validate input
    while (n <= 0) {
        cout << "Please enter a positive number: ";
        cin >> n;
    }
    
    // Declare array with user-specified size
    int arr[n];
    
    // Input elements from user
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }
    
    // Display original array
    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Call PROXMAN sorting function
    PROXMAN(arr, n);
    
    // Display sorted array
    cout << "\nArray after PROXMAN sorting (ascending order): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    
    // Program execution complete
    cout << "Program execution completed successfully!" << endl;
    
    return 0;
}

// PROXMAN Sorting Algorithm Implementation
// This function sorts an array in ascending order using Bubble Sort technique
void PROXMAN(int arr[], int n) {
    bool swapped;
    int passCount = 0;
    
    cout << "\n--- PROXMAN Algorithm Execution Steps ---" << endl;
    
    // Outer loop for multiple passes through the array
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        passCount++;
        cout << "\nPass " << passCount << ":" << endl;
        
        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements
            cout << "  Comparing arr[" << j << "] = " << arr[j] 
                 << " and arr[" << (j + 1) << "] = " << arr[j + 1];
            
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                cout << " - SWAPPING (ascending order)" << endl;
                
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                swapped = true;
            } else {
                cout << " - No swap needed" << endl;
            }
        }
        
        // Display array after each pass
        cout << "  Array after pass " << passCount << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
        
        // If no swapping occurred, array is already sorted
        if (!swapped) {
            cout << "\nNo swaps in this pass - array is sorted!" << endl;
            break;
        }
    }
    
    cout << "\n--- PROXMAN Algorithm Completed ---" << endl;
}
