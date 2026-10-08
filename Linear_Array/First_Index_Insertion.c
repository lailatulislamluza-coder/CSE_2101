#include <stdio.h>

int main()
{
    int a[100], n, i, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter value to insert at first index: ");
    scanf("%d", &value);

    // Shift elements to the right
    for(i = n; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    // Insert at first index
    a[0] = value;

    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}