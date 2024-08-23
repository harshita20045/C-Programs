#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of a :");
    scanf("%d", &a);
    printf("\nEnter the value of b :");
    scanf("%d", &b);
    printf("\nEnter the value of c :");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("a is the greatest number");
    }
    else if (b > c && b > c)
    {
        printf("a is the greatest number");
    }
    else
    {
        printf("c is the greatest number");
    }

    return 0;
}