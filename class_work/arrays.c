#include <stdio.h>

/*void main() {
    int a[10];
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    printf("You entered:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);    }
}*/

void main()
{
    int a[3],
        b[3],
        c[3];
    printf("Enter 3 integers for array A:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter 3 integers for array B:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        c[i] = a[i] + b[i];
    }
    printf("Resultant array C (A + B):\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", c[i]);
    }
}
