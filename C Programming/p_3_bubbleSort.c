#include <stdio.h>
#include <stdbool.h>
int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int n = sizeof(array) / sizeof(array[0]);

    for (int i=0; i<n-1; i++){
        bool swapped = false;
        for (int j=0; j<n-i-1; j++) {
            if ( array[j] > array[j+1]) 
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swapped = true;
            }   
        }
        if (!swapped) {
            break;
        }
    }
    for (int i = 0; i<n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}