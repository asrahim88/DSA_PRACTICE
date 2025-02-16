#include <iostream> 
using namespace  std;

int main() {
    int array [] = {8,4,5,6,89,4,5,1,0};
    int minValue = array[0];
    for(int number: array) {
        if(number < minValue) {
            minValue = number;
        }
    }
    cout << minValue << endl;

    int maxValue = array[0];
    int size = sizeof(array) / sizeof(array[0]);
    for(int i = 0; i<size; i++) {
        if(array[i] > maxValue) {
            maxValue = array[i];
        }
    }
    cout << maxValue << endl;
    return 0;
}