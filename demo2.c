#include <stdio.h>

int main() {
    // Declare variables of different data types
    char c = 'A';
    int i = 100;
    long l = 100000L;
    double d = 3.1415;

    // Declare pointers for each type
    char *ptr_c = &c;  // Pointer to char
    int *ptr_i = &i;    // Pointer to int
    long *ptr_l = &l;   // Pointer to long
    double *ptr_d = &d; // Pointer to double

    // Display the address and value of each variable using pointers
    printf("Address of char: %p, Value of char: %c\n", ptr_c, *ptr_c);
    printf("Address of int: %p, Value of int: %d\n", ptr_i, *ptr_i);
    printf("Address of long: %p, Value of long: %ld\n", ptr_l, *ptr_l);
    printf("Address of double: %p, Value of double: %f\n", ptr_d, *ptr_d);

    return 0;
}
