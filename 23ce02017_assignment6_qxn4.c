#include <stdio.h>
int main()
{
    int x, y;
    printf("enter the number of elements in first array:");
    scanf("%d", &x);
    printf("enter the number of elements in second array:");
    scanf("%d", &y);
    int arr1[x], arr2[y];
    printf("enter the numbers of first array:");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("enter the numbers of second array:");
    for (int i = 0; i < y; i++)
    {
        scanf("%d", &arr2[i]);
    }
    if (x > y)
    {
        int d = 1;
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < x; j++)
            {
                if (arr2[i] == arr1[j])
                {
                    d = 1;
                    break;
                }
                else
                {
                    d = 0;
                    continue;
                }
            }
            if (d == 1)
            {
                continue;
            }
            else
            {
                break;
            }
        }
        if (d == 1)
        {
            printf("arr2[] is a subset of arr1[]");
        }
        else
        {
            printf("arr2[] is not a subset of arr1[]");
        }
    }
    else
    {
        int d = 1;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if (arr1[i] == arr2[j])
                {
                    d = 1;
                    break;
                }
                else
                {
                    d = 0;
                    continue;
                }
            }
            if (d == 1)
            {
                continue;
            }
            else
            {
                break;
            }
        }
        if (d == 1)
        {
            printf("arr1[] is a subset of arr2[]");
        }
        else
        {
            printf("arr1[] is not a subset of arr2[]");
        }
    }

    return 0;
}
