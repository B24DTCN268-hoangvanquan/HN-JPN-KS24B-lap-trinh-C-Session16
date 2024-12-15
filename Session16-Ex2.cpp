#include <stdio.h>

int* swap(int *x, int *y) {
    static int result[2];  
    result[0] = *y;  
    result[1] = *x; 
    return result;   
}

int main() {
    int x = 5, y = 10;  

    printf("Truoc khi hoan doi:\n");
    printf("x = %d, y = %d\n", x, y);

    int* swapped = swap(&x, &y);

    x = swapped[0];
    y = swapped[1];

    printf("Sau khi hoan doi:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

