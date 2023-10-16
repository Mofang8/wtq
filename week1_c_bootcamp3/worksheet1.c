#include <stdio.h>
int main() {
    int a;
    printf ("please entry the number:");
    scanf ("%d", &a);

    if (a == 0)
    {
        printf("The number is zero\n");
    }
    else if (a > 0)
    {
        printf("the number is postive\n");
    }
    else if (a < 0)
    {
        printf ("the number is negative\n");
    }
    return 0;
    
}