#include <stdio.h>

int main()
{
    int a[100], n, i;
    int smallest, largest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    smallest = largest = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] < smallest)
        {
            smallest = a[i];
        }

        if(a[i] > largest)
        {
            largest = a[i];
        }
    }

    printf("Smallest element = %d\n", smallest);
    printf("Largest element = %d\n", largest);

    return 0;
}

