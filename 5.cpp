#include <iostream>
using namespace std;

// Function to find max and min using pointers
void findMaxMin(int arr[], int size, int* max, int* min) {
    // Initialize max and min with first element
    *max = *min = arr[0];
    
    // Loop through the array using pointer arithmetic
    for(int i = 1; i < size; i++) {
        if(*(arr + i) > *max) {
            *max = *(arr + i);  // Update max if current element is larger
        }
        if(*(arr + i) < *min) {
            *min = *(arr + i);  // Update min if current element is smaller
        }
    }
}

int main() {
    int numbers[] = {5, 2, 9, 1, 7, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int max, min;
    
    // Call the function with addresses of max and min
    findMaxMin(numbers, size, &max, &min);
    
    cout << "Array elements: ";
    for(int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    cout << "Maximum value: " << max << endl;
    cout << "Minimum value: " << min << endl;
    
    return 0;
}