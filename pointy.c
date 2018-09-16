#include <stdio.h>

int main() {
    int x = 1683021345;
    char * e  = &x;
    printf("value of x in hex: %x \n", x);
    int size;
    for(size = sizeof(x); size > 0; size--) {
        // prints out each byte:
        // printf("value of what x points to: %hhx \n", *e);
        // e++;
       
        // increments each byte by 1
        // printf("before change: %hhx \n", *e);
        // (*e)++;
        // printf("after change: %hhx \n", *e);
        // e++;
        
        // increments each byte by 16
        // printf("before change: %hhx \n", *e);
        // *e = *e + 16;
        // printf("after change: %hhx \n", *e);
        // e++;
        
        printf("before change: %hhx \n", *e);
        *e+= 256;
        printf("after change: %hhx \n", *e);
        e++;
    }
    printf("value of new x: %x \n", x);
    printf("value of new x in decimal: %i \n", x);

    return 0;
}
