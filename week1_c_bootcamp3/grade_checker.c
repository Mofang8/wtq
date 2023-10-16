#include <stdio.h>
int main(){
    int a;

    printf ("entry number\n");
    scanf ("%d", &a);
    if (a < 50)
    {
        printf("not pass\n");
    }
    else if (a >= 50 && a < 70)
    {
        printf ("pass\n");
    }
    else
    {
        printf ("achieved\n");
    }
    return 0;
    
    
}