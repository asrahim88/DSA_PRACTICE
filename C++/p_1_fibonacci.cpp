#include <iostream>
using namespace  std;
int count = 2;
int fibonacci(int n);
// 2nd way
/*
void fibonacci(int prev1, int prev2) {
    if (count <= 19) {
        int newFib = prev1 + prev2;

        cout << newFib << " ";

        prev2 = prev1;
        prev1 = newFib;
        count ++;

        fibonacci(prev1, prev2);
    } else {
        return ;
    }
}
*/
int main(){
    // cout << 0 << " " << 1 << " ";
    // fibonacci(1, 0);

    /*
    //                    1st way

    int prev1 = 1, prev2 = 0;
    cout << prev2  << " " << prev1 <<" ";

    for (int i = 0; i<18; i++) {
        int newFib = prev1 + prev2;
        cout << newFib << " ";
        prev2 = prev1;
        prev1 = newFib;
    }
    */

    //              3rd way
    cout << fibonacci(19);
    
    return 0;
}
int fibonacci(int n) {
    if (n<=1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
