//                  Min Value from the array 

let array0 = [8,4,5,6,89,4,5,1];
let minValue = array0[0];

for (let number of array0) {
    if (number < minValue) {
        minValue = number;
    }
}
console.log(minValue)



//              Max value from the array

let array = [8,4,5,6,89,4,5,1];
let maxValue = array[0];

for (let i = 0; i< array.length; i++)
{
    if (array[i] > maxValue) {
        maxValue = array[i];
    }
}
console.log(maxValue);