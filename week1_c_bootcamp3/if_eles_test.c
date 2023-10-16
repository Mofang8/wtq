#include<stdio.h>
int main() {
    int mark = 70;
    if (mark == 0)
    {
        printf ("the value is 0\n");
    }
    else if (mark >= 70 && mark <= 100)
    {
       printf("the mark of %d is a first\n", mark); 
    }
    else if (mark >= 60)
    {
       printf("the mark of %d is a 2:1\n", mark); 
    }
    else
    {
        printf ("the value is not a valid mark\n");
    }
    return 0;
}

