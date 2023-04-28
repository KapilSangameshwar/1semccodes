#include <stdio.h>

int bsearch(int *array, int key, int low, int high)
{
    int mid = low + (high - low) / 2;
    printf("%d %d %d \n", low, mid, high);
    if (array[mid] == key)
    {
        return mid;
    }
    else if (array[mid] < key)
    {
        bsearch(array, key, mid + 1, high);
    }
    else if (array[mid] > key)
    {
        bsearch(array, key, low, mid - 1);
    }
    else
    {
        return -1;
    }
}
int main()
{
    int n, i, key, index;
    printf("Enter the number of elements of the array: \n");
    scanf("%d", &n);
    int array[n];

    printf("Enter the elements of the array in increasing order: \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf(" %d \n", array[i]);
    }
    printf("Enter the key to search: \n");
    scanf("%d", &key);

    if (index >= 0)
    {
        index = bsearch(array, key, 0, n - 1);
        printf("Found the key(%d) at: %d \n", key, index);
    }
    else
    {
        printf("The key not found.");
    }

    return 0;
}