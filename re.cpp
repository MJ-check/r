#include <stdio.h>
#define N 10

double aver1_x(double *px,double );
double aver1_y(double *py,double );
double aver1_xy(double *px,double *py,double );
double aver1_x_square(double *px,double );

int main()
{
    double x[N],y[N],n=N;
    int i,j;
    double aver_x,aver_y,aver_xy,aver_x_square;
    double a,b;

    printf("please input the number x\n");
    for(i=0;i<N;i++)
    {
        scanf("%lf",&x[i]);
    }
    printf("please input the number y\n");
    for(j=0;j<N;j++)
    {
        scanf("%lf",&y[j]);
    }

    aver_x=aver1_x(x,n);
    aver_y=aver1_y(y,n);
    aver_xy=aver1_xy(x,y,n);
    aver_x_square=aver1_x_square(x,n);

    b=(aver_xy-aver_x*aver_y)/(aver_x_square-aver_x*aver_x);

    a=aver_y-b*aver_x;

    printf("result is \ny=%.9lf+%.9lf x",a,b);

    return 0;
}
double aver1_x(double *px,double n)
{
    int i;
    double re=0;

    for(i=0;i<n;i++)
    {
        re+=px[i];
    }

    re=re/n;

    return re;
}
double aver1_y(double *py,double n)
{
    int i;
    double re=0;

    for(i=0;i<n;i++)
    {
        re+=py[i];
    }

    re=re/n;

    return re;
}
double aver1_xy(double *px,double *py,double n)
{
    int i;
    double re=0;

    for(i=0;i<n;i++)
    {
        re+=px[i]*py[i];
    }

    re=re/n;

    return re;
}
double aver1_x_square(double *px,double n)
{
    int i;
    double re=0;

    for(i=0;i<n;i++)
    {
        re+=px[i]*px[i];
    }

    re=re/n;

    return re;
}