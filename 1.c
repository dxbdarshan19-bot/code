 #include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {1,2,3,4,5,6,7,}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    if (size < 2) {
        printf("Array must contain at least two elements.\n");
        return 1;
    }
    int first = INT_MIN;
    int second = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
        
            second = first; 
            first = arr[i];
        } 
        else if (arr[i] > second && arr[i] < first) {    
            second = arr[i];
        }
    } 
    if (second == INT_MIN) {
        printf("There is no fist largest distinct element.\n");
    } else {
        printf("The largest element is: %d\n", first);
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}

