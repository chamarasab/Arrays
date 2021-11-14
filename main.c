#include <stdio.h>

int main() {
    printf("Hello, Arrays!\n");
    
    int numbers[100];                           //array declaration

    for (int i = 0; i < 100; ++i) {
        numbers[i] = i+1;
        printf("%d,",numbers[i]);
    }
    return 0;
}
