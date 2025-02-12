//           1st way
/*
const limit = 18;

let fib2 = 0;
let fib1 = 1;

process.stdout.write(fib2+" "+fib1);

for (let i = 0; i<limit; i++) {
    let newFib = fib1 + fib2;
    process.stdout.write(" "+newFib);
    fib2 = fib1;
    fib1 = newFib;
}
*/

//                      2nd way

/*
process.stdout.write(0 + " " + 1);
let count = 2;
function fibonacci(prev1, prev2) {
    if (count <= 19) {
        newFib = prev1 + prev2;
        process.stdout.write(" "+newFib);
        prev2 = prev1;
        prev1 = newFib;
        count ++;
        fibonacci(prev1, prev2);
    } else {
        return;
    }
}
fibonacci(1, 0);
*/

//         3rd way to get nth fibonacci number

function fibonacci(n) {
    if (n<=1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

console.log(fibonacci(19));

process.stdout.write(fibonacci(19)+" ");