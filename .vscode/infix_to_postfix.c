#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 10
char stack[size];
int top;
void push(int item)
{
    top=top+1;
    stack[top]=item;
}
int pop()
{
    int temp;
    temp=stack[top];
    top=top-1;
    return temp;
}
int isoperator(char sym)
{
    switch(sym)
    {
        case '-':
        case '+':
        case '*':
        case '/':
        case '^':
        case '%':return 1;
        default:return 0;
    }
}
int isoperand(char sym)
{
    if((sym>='a' && sym<='z')
    ||(sym>='A' && sym<='Z')
    ||(sym>='0' && sym<='9'))
    return 1;
    else return 0;
}
int prec(char sym)
{
    switch(sym)
    {
        case '^':return 3;
        case '*':
        case '/':
        case '%':return 2;
        case '+':
        case '-':return 1;
        case '(':return 0;
    }
}
void convert_to_postfix(char infix[], char postfix[])
{
    int i,j=0;
    char sym;
    top=-1;
    for(i=0;i<strlen(infix);i++)
    {
        sym=infix[i];
        if(isoperand(sym)==1)
        {
            postfix[j]=sym;
            j++;
        }
        else if(sym=='(')
        push(sym);
        else if(sym==')')
        {
            while(stack[top] !='(')
            {
                postfix[j]=pop();
                j++;
            }
            pop();
        }
        else if(isoperator(sym)==1)
        {
            if(prec(sym)>prec(stack[top]))
            {
                push(sym);
            }
            else
            {
                while(prec(sym)<=prec(stack[top]))
                {
                    postfix[j]=pop();
                    j++;
                }
                push(sym);
            }
        }
        else 
        {
            printf("INVALID CHARACTER %c",sym);
            exit(0);
        }
    }
    if (top!=-1)
    {
        while(top!=-1)
        {
            postfix[j]=pop();
            j++;
        }
        postfix[j]='\0';
    }
}
void main()
{
    char infix[size],postfix[size];
    printf("Enter Infix expression:");
    gets(infix);
    convert_to_postfix(infix,postfix);
    printf("\nPostfix expression=%s",postfix);
}