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

    printf("%d, %d, %d, %d\n",arr[0],arr[1],arr[2],arr[3]);  //output at Capture12.png

    printf("%pn \n",&arr);                                  //memory address of the array
    printf("%pn, %pn, %pn, %pn\n",&arr[0],&arr[1],&arr[2],&arr[3]);  //print memory address of each array element
                                                                    //output at Capture13.png
    return 0;
}
