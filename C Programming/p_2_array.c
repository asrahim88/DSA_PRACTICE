#include <stdio.h>
int main() {
    //                Get Min Value From The Array

    int array[] = {4,87,9,6,5,6,7};

    int size = sizeof(array) / sizeof(array[0]);
    int minValue = array[0];

    for (int i =0; i< size; i++)
    {
        if (array[i] < minValue) {
            minValue = array[i];
        }
    }
    printf("Min value is %d ", minValue);

    int maxValue = array[0];
    for(int i = 0;i <size; i++){
        if(array[i] > maxValue) {
            maxValue = array[i];
        }
    }
    printf("Max value is %d ", maxValue);
    return 0;
}