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

   /*int input[4];
    printf("Enter 4 elements  \n");
    for (int i = 0; i < 4; ++i) {
        printf("Enter %d th element : ",i);
        scanf("%d",&input[i]);                  //read the elements

    }
    printf("You inserted : %d %d %d %d \n",input[0],input[1],input[2],input[3]);    //print elements
    //output at Capture14.png
    */
   /* float six_week_grade[5];
    int number ;
    for ( number = 0 ; number < 5 ; number = number + 1 )
    {
        printf( "Enter score for student %d : " , number + 1 );
        scanf( "%f" , &six_week_grade[ number ] );
    }
    for ( number = 0 ; number < 5 ; number = number + 1 ){
        printf("Student %d : %f\n",number+1,six_week_grade[number]);
    }
    */

   //Two Dimensional Array

   //int marks[2][2]={201,201},{65,75};

   /* int ary[][2][3] = {
            {               //[0]   -block
                {1,2,3},        //[0][0]
                {4,5,6}         //[0][1]
            },
            {               //[1]   -block
                {7,8,9},        //[1][0][...]
                {10,11,12}      //[1][1][...]
            }
    };
    printf("%d %d\n", ary[0][0][0], ary[1][1][1]);
    //printf("%d",ary[1].length);

    int arys[][3] = {6,5,4,3,2,1};
    printf("%d %d\n", arys[0][0], arys[1][0]);

    */

    int buss[4][5]=
    {
            {8,12,9,7,10},
            {5,7,3,0,4},
            {20,15,18,21,14},
            {6,9,5,8,11}
    };
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%d ",buss[i][j],buss[i][j]);
        }
        printf("\n");
    }
//lecture's answer
   /* int route, day = 0;

    int bus[4][5];

    for(day = 0; day <= 4; day = day + 1)
    {
        printf("Give the number of passengers for day %d: ", day+1);
        for(route = 0; route <= 3; route = route + 1)
            scanf("%d", &bus[route][day]);
//scanf_s("%d", &bus[route][day], sizeof(bus));
    }
    printf("\n");
    for(route = 0; route <= 3; route = route + 1)
    {
        for(day = 0; day <= 4; day = day + 1)
            printf("[%d][%d]=%2d ", route, day, bus[route][day]);
        printf("\n");
    }*/
/*
    printf("\nArrays Basics\n");
    int x[10]={0};
    for (int i = 0; i < 10; ++i) {
        printf("%d ",x[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; ++i) {
        x[i] = i;
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d ",x[i]);
    }

    printf("\n\nEnter no. of subjects : ");
    int count=5;
    scanf("%d",&count);
    int mark[5];

    printf("Enter marks\n");
    for (int i = 0; i < count; ++i) {
        printf("Subject %d : ",i + 1);
        scanf("%d",&mark[i]);
    }

    */

    int x=29;
    double y=3.14;
    char c='N';

    char *ptr=&c;
    printf("Size of int: %d bytes\n"
           "Size of double: %d bytes\n"
           "Size of float: %d bytes\n"
           "Size of character: %d byte"
           ,sizeof(x),sizeof(y),sizeof(float),sizeof(c));

    printf("The size of the character pointer is %d bytes",sizeof(ptr));

    return 0;
}
