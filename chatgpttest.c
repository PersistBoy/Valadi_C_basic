#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;
    
    printf("num = %d\n", num);
    printf("ptr = %p, *ptr = %d\n", ptr, *ptr);
    
    *ptr = 20;
    
    printf("num = %d\n", num);
    printf("ptr = %p, *ptr = %d\n", ptr, *ptr);
    
    return 0;
}
