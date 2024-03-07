#include <stdio.h>
int primecheck(int i);
void primeprint(int l,int u,int num);
int main()
{
    int l, u, num = 0;
    printf("enter the lower limit:");
    scanf("%d", &l);
    printf("enter the upper limit:");
    scanf("%d", &u);
    primeprint(l,u,num);
    return 0;
}
int primecheck(int i)
{
    int y = 0;
    for (int j = 2; j < i; j++)
    {
        if (i % j == 0)
        {
            y = 1;
            break;
        }
        else
        {
            continue;
        }
    }
    if (y == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void primeprint(int l,int u,int num)
{
    int array[u-l];
    for (int i = l + 1; i < u; i++)
    {
        if (primecheck(i) == 1)
        {
            array[num] = i;
            num++;
            continue;
        }
    }
    printf("Prime numbers between %d-%d are:\n\n", l, u);
    for (int i = 0; i < num - 1; i++)
    {
        printf("%d,", array[i]);
    }
    printf("%d", array[num - 1]);
}