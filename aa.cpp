#include <stdio.h>//计算日期

int main()
{
    int a[4]={2019,5,27,1};
    int year,month,week,number;
    int m=0,n,p;

    printf("please input the year\n");
    scanf("%d",&year);
    printf("please input the month\n");
    scanf("%d",&month);
    printf("please input the number\n");
    scanf("%d",&number);
    printf("please input the week\n");
    scanf("%d",&week);

    while(1)
    {
        a[3]+=1;
        a[2]+=1;

        if(a[3]==8)
        {
            a[3]=1;
            m+=1;
        }

        p=a[0]%4;
            
        if(p==0)
        {
            switch(a[1])
            {
                case 1: if(a[2]==32) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 2: if(a[2]==30) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 3: if(a[2]==32) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 4: if(a[2]==31) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 5: if(a[2]==32) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 6: if(a[2]==31) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 7: if(a[2]==32) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 8: if(a[2]==32) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 9: if(a[2]==31) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 10: if(a[2]==32) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 11: if(a[2]==31) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 12: if(a[2]==32) {a[2]=1; a[1]=1; m=0; a[0]+=1; n=7-a[3]+1;} break;
            }
        }
        else
        {
            switch(a[1])
            {
                case 1: if(a[2]==32) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 2: if(a[2]==29) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 3: if(a[2]==32) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 4: if(a[2]==31) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 5: if(a[2]==32) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 6: if(a[2]==31) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 7: if(a[2]==32) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 8: if(a[2]==32) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 9: if(a[2]==31) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 10: if(a[2]==32) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 11: if(a[2]==31) {a[2]=1; a[1]+=1; m=0; n=7-a[3]+1;} break;
                case 12: if(a[2]==32) {a[2]=1; a[1]=1; m=0; a[0]+=1; n=7-a[3]+1;} break;
            }
        }

        if(week>=8-n)
        {
            if(a[0]==year&&a[1]==month&&m==(number-1)&&a[3]==week)
            {
                printf("the day is %d.%d.%d.%d\n",a[0],a[1],a[2],a[3]);
                break;
            }
        }
        else
        {
            if(a[0]==year&&a[1]==month&&m==number&&a[3]==week)
            {
                printf("the day is %d.%d.%d.%d\n",a[0],a[1],a[2],a[3]);
                break;
            }   
        }

        if(week>=8-n)
        {
            if((a[0]==year&&a[1]==month&&m>(number-1))||(a[0]==year&&a[1]==month&&m==(number-1)&&a[3]>week)||a[0]==year&&a[1]>month)
            {
                printf("error!\n");
                break;
            }
        }
        else
        {
            if((a[0]==year&&a[1]==month&&m>number)||(a[0]==year&&a[1]==month&&m==number&&a[3]>week)||a[0]==year&&a[1]>month)
            {
                printf("error!\n");
                break;
            }   
        }
    }

    return 0;
}