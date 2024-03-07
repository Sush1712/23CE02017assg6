#include<stdio.h>
void rec(int i,int n,int array[n]);
int main()
{
    int n;
    printf("enter number of elements in the array:");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    rec(n,n,array);
    return 0;
}
void rec(int i,int n,int array[n])
{
    if(i==1)
    {
        printf("%d",array[i-1]);
    }
    else
    {
        printf("%d ",array[i-1]);
        rec(i-1,n,array);
    }
}
