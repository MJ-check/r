#include <stdio.h>

double sum1(int );
double sum2(int );

int main()
{
    int n;
    int m;
    double (*pf[2])(int )={sum1,sum2};
    double result;

    printf("please choose the number n\n");
    scanf("%d",&n);

    m=n%2;

    if(m==1)
        result=pf[0](n);
    else if(m==0)
        result=pf[1](n);
    else
        printf("error!");

    printf("result is %.9lf\n",result);

    return 0;
}
double sum1(int n)
{
    double i;
    double re;

    for(i=1;i<=n;i+=2)
    {
        re+=1/i;
    }

    return re;
}
double sum2(int n)
{
    double i;
    double re=0;

    for(i=2;i<=n;i+=2)
    {
        re+=1/i;
    }

    return re;
}