#include <iostream>
using namespace  std;
int main() {
    int my_array[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int n = sizeof(my_array) / sizeof(my_array[0]);

    for (int i = 0; i<n-1; i++) {
        bool swapped = false;
        for (int j = 0; j<n-i-1; j++) {
            if (my_array[j] > my_array[j+1]) {
                int temp = my_array[j];
                my_array[j] = my_array[j+1];
                my_array[j+1] = temp;
                swapped = true;
            }
        }
        if (swapped != true) {
            break;
        }
    }

    for (int number: my_array) {
        cout << number << " ";
    }
    return 0;
}