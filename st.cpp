#include <stdio.h>//²åÈë×Ö·û´®
#include <string.h>
#include <stdlib.h>
#define N 10

char * s_gets(char *pstr, int n);
char * interpose(char *ch_input, char *ch_interpose, const int location, int n);

int main()
{
    char ch_input[N];
    char ch_location[2];
    int location;
    char ch_interpose[N];
    char *result;

    puts("please input the string");
    s_gets(ch_input, N);
    puts("what's the location");
    gets(ch_location);
    location=atoi(ch_location);
    puts("please input the string you want to nterpose");
    s_gets(ch_interpose, N);

    result=interpose(ch_input, ch_interpose, location, N);

    puts("result is");
    puts(result);

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
char * interpose(char *ch_input, char *ch_interpose, const int location, int n)
{
    if((strlen(ch_input)+strlen(ch_interpose))>=n)
        return ch_input;
    else if(location>strlen(ch_input))
        return ch_input;
    else
    {
        char ch_copy[n];

        strcpy(ch_copy, ch_input+location);
        *(ch_input+location)='\0';
        strcat(ch_input, ch_interpose);
        strcat(ch_input, ch_copy);

        return ch_input;
    }
}