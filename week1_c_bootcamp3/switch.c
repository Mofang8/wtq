#include <stdio.h>

int main() {
    int a;
    printf ("please entery the number:");
    scanf ("%d", &a);
    
    if (a >=0 && a <= 3)
    {
            switch (a)
    {
        case 0:     printf ("Option 0 has been selected\n");
        break;

        case 1:     printf ("Option 1 has been selected\n");
        break;

        case 2:     printf ("Option 2 has been selected\n");
        break;

        case 3:     printf ("Option 3 hase been selected\n");
        break;
        default:    printf ("A different option has been selected\n");
    }
    }
    else
    {
        printf ("number must between 0 to 3\n");
    }
return 0;
}