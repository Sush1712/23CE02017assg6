#include<stdio.h>
void print(int n,int array[n],int array1[n],int sum,int num);
int main()
{
    int num=0,n,sum=0;
    printf("enter the number of integers:");
    scanf("%d",&n);
    int array[n],array1[n];
    printf("enter the integers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }
    print(n,array,array1,sum,num);
    return 0;
}
void print(int n,int array[n],int array1[n],int sum,int num)
{
    int avg=sum/n;
    for(int i=0;i<n;i++)
    {
        if(array[i]>avg)
        {
            array1[num]=array[i];
            num=num+1;
        }
    }
    for (int i = 0; i < num - 1; i++)
    {
        printf("%d,", array1[i]);
    }
    printf("%d", array1[num - 1]);
}