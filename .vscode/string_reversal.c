#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 20
char stack;
int top=-1;
char push(char *string)
{
    top=top+1;
    stack[top]=*string;
}
char pop()
{
    int temp;
    temp=stack[top];
    top=top-1;
    return temp;
}
void main()
{
    char string;
    int i,temp;
    for(i=0;i<strlen(*string);i++)
    {
        push(*(string+i));
    }
    for(i=0;i<strlen(*string);i++)
    {
        temp=pop();
        printf("string:",temp)
    }
}