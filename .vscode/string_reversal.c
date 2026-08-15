#include<stdio.h>
#include<string.h>
#define size 20
char stack[size];
int top=-1;
void push(char string)
{
    top=top+1;
    stack[top]=string;
}
char pop()
{
    char temp;
    temp=stack[top];
    top=top-1;
    return temp;
}
void main()
{
    char temp,string[size];
    int i;
    printf("Enter a string: ");
    gets(string);
    for(i=0;i<strlen(string);i++)
    {
        push(*(string+i));
    }
    printf("\nReversed string:");
    for(i=0;i<strlen(string);i++)
    {
        temp=pop();
        printf("%c",temp);
    }
}