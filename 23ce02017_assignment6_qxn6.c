#include <stdio.h>
#include<math.h>
void city(int n,int x[n][7],float avg[n]);
int main()
{
    int n;
    printf("enter the number of cities:");
    scanf("%d", &n);
    int x[n][7];
    float avg[n];
    city(n,x,avg);
    return 0;
}
void city(int n,int x[n][7],float avg[n])
{
    for (int i = 0; i < n; i++)
    {
        avg[i]=0;
        printf("enter the values of city-%d:\n",i+1);
        for (int j = 0; j < 7; j++)
        {
            scanf("%d",&x[i][j]);
            avg[i]=avg[i]+x[i][j];
        }
        avg[i]=avg[i]/7;
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ",avg[i]);
    }
}