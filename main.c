#include <stdio.h>

int main() {
    printf("Hello, Arrays!\n");

   /* int numbers[100];                           //array declaration.

    for (int i = 0; i < 100; ++i) {              //assigning and printing values to array using for loop.
        numbers[i] = i+1;                       //values assigning using loop iteration value.
        printf("%d,",numbers[i]);       //print all values inside the array.
    }
    */

   int arr[5];
   arr[0] = 5;
   arr[3/2] = -10;
   arr[2] = 2;
   arr[3] = arr[0];

    printf("%d, %d, %d, %d",arr[0],arr[1],arr[2],arr[3]);

    return 0;
}
