#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXNUMBER 9
#define MAXNAME 6
#define MAXWAGE 5

struct person{
    char number[MAXNUMBER];
    char name[MAXNAME];
    float age;
    char wage[MAXWAGE];
    float money;
    struct person *next;
};

char * s_gets(char *pstr, int n);

int main()
{
    struct person *head=NULL, *current, *preve;
    char input[MAXNUMBER], ch_age[100], ch_money[100], *judge1;

    while(1)
    {
        puts("please input the number");
        judge1=s_gets(input, MAXNUMBER);
        
        if(judge1!=NULL&&input[0]!='\0')
        {
            current=(struct person *)malloc(sizeof(struct person));
            if(head==NULL)
                head=current;
            else
                preve->next=current;
            
            strcpy(current->number, input);
            puts("please input the name");
            s_gets(current->name, MAXNAME);
            puts("please input the age");
            s_gets(ch_age, 100);
            current->age=atof(ch_age);
            puts("please input the wage");
            s_gets(current->wage, MAXWAGE);
            puts("please input the money");
            s_gets(ch_money, 100);
            current->money=atof(ch_money);
            current->next=NULL;
            preve=current;
        }
        else
        {
            break;
        }
    }

    puts("  number   name   age  wage    money");
    puts("------------------------------------");
    current=head;
    while(current!=NULL)
    {
        printf("%8s  %5s  %4.1f  %4s  %6.2f",current->number, current->name, current->age, current->wage, current->money);
        current=current->next;
    }

    current=head;
    while(current!=NULL)
    {
        current=head;
        head=current->next;
        free(current);
    }

    return 0;
}
char * s_gets(char *pstr, int n)
{
    char *re_val;
    int i=0;

    re_val=fgets(pstr, n, stdin);

    if(re_val)
    {
        while(pstr[i]!='\0'&&pstr[i]!='\n')
            i++;
        if(pstr[i]=='\n')
            pstr[i]='\0';
        else
            while(getchar()!='\n')
                continue;
    }

    return re_val;
}
