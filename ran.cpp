#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 15

void randon(int *pa,int );
int sum(int *p,int );

int main()
{
    int a[N];
    int n=N/5,m=N%5;
    int b[n];
    void (*pf1)(int *,int )=randon;
    int (*pf2)(int *,int )=sum;
    int i;//循环变量用于输出

    (*pf1)(a,N);

    printf("the number of array is\n");
    for(i=0;i<N;i++)
    {
        printf("%d\t",a[i]);
        if((i+1)%10==0)
        {
            printf("\n");
        }
    }
    printf("\n");

    for(i=0;i<n;i++)
    {
        b[i]=(*pf2)(a+i*5,5);
    }

    printf("the sum of five numbers is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
    printf("\n");
    if(m!=0)
    {
        printf("the rest number is\n");
        for(i=0;i<m;i++)
        {
            printf("%d\t",a[5*n+i]);
        }
    }

    return 0;
}
void randon(int *pa,int n)
{
    int i;//循环变量用于赋值

    srand((int)time(NULL));
    for(i=0;i<n;i++)
    {
        pa[i]=rand()%101;
    }
}
int sum(int *p,int n)
{
    int i;//循环变量用于计算
    int sum=0;

    for(i=0;i<n;i++)
    {
        sum+=*(p+i);
    }

    return sum;
}