#include <stdio.h>
int main() {
    int age;
    printf("entry your age: ");
    scanf("%d", &age);
    //&age is the address of the variable age,\n is the “newline” character
    printf("your age is %d\n", age);

    return 0;
}
