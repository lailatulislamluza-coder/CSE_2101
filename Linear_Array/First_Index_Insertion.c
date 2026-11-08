#include <stdio.h>

int main()
{
    int a[100], n, i, value;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter value: ");
    scanf("%d", &value);

    for(i = n; i > 0; i--)
    {
        a[i] = a[i-1];
    }

    a[0] = value;
    n++;

    printf("After insertion: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}