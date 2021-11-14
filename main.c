#include <stdio.h>

int main() {
    printf("Hello, Arrays!\n");

   /* int numbers[100];                           //array declaration.

    for (int i = 0; i < 100; ++i) {              //assigning and printing values to array using for loop.
        numbers[i] = i+1;                       //values assigning using loop iteration value.
        printf("%d,",numbers[i]);       //print all values inside the array.
    }
    */

   /*int arr[5];
   arr[0] = 5;
   arr[3/2] = -10;
   arr[2] = 2;
   arr[3] = arr[0];

    printf("%d, %d, %d, %d\n",arr[0],arr[1],arr[2],arr[3]);  //output at Capture12.png

    printf("%pn \n",&arr);                                  //memory address of the array
    printf("%pn, %pn, %pn, %pn\n",&arr[0],&arr[1],&arr[2],&arr[3]);  //print memory address of each array element
   */
   //above output at Capture13.png

   int input[4];
    printf("Enter 4 elements [ 2,3,7,4]: \n");
    for (int i = 0; i < 4; ++i) {
        printf("Enter %d th element : ",i);
        scanf("%d",&input[i]);                  //read the elements

    }
    printf("You inserted : %d %d %d %d \n",input[0],input[1],input[2],input[3]);    //print elements

    return 0;
}
