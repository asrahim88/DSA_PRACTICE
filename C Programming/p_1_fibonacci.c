#include <stdio.h>
int count = 2;
// void fibonacci(int prev1, int prev2);
int fibonacci(int n);
int main() {
    // int fib2 = 0;
    // int fib1 = 1;

    // printf("%d %d ", fib2, fib1);

    // for (int i = 0; i<18; i++) {
    //     int newFib = fib1 + fib2;
    //     printf("%d ", newFib);
    //     fib2 = fib1;
    //     fib1 = newFib;
    // }
    // printf("%d %d ", 0, 1);
    // fibonacci(1, 0);

    printf("%d ", fibonacci(19));
    return 0;
}

//               2nd way
// void fibonacci(int prev1, int prev2) {
//     if (count <= 19) {
//         int newFib = prev1 + prev2;
//         printf("%d ", newFib);
//         prev2 = prev1;
//         prev1 = newFib;

//         count ++;
//         fibonacci(prev1, prev2);
//     } else {
//         return;
//     }
// }


//            3rd way to get nth number fibonacci

int fibonacci(int n) {
    if (n<=1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}