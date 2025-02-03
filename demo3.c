#include <stdio.h>

// Define a structure
struct Person {
    char name[20];
    int age;
};

// Define a union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    // Declare structure and union variables
    struct Person p1 = {"John", 25};
    union Data data;

    // Declare pointers to structure and union
    struct Person *ptrPerson = &p1;
    union Data *ptrData = &data;

    // Access and display structure values using pointer
    printf("Using structure pointer:\n");
    printf("Name: %s\n", ptrPerson->name);
    printf("Age: %d\n", ptrPerson->age);

    // Assign and access union values using pointer
    ptrData->i = 100;
    printf("\nUsing union pointer:\n");
    printf("Integer value: %d\n", ptrData->i);

    ptrData->f = 3.14;
    printf("Float value: %.2f\n", ptrData->f);

    // Note: Only one member of the union can hold a value at a time
    printf("String value: %s\n", ptrData->str); // Will print an empty string since f overwrites i

    return 0;
}
