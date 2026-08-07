#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 10
int stack[size],top;
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
int is_operator(char sym)
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
int is_operand(char sym)
{
    if(sym>='0'&& sym<='9')
    return 1;
    else return 0;
}
int evaluate(char postfix[])
{
    char sym;
    int op1,op2,top=-1,i,res;
    postfix=strrev(postfix);
    for(i=0;i<strlen(postfix);i++)
    {
        sym=postfix[i];
        if(is_operand(sym)==1)
        {
            push(sym-48);
        }
        else if(is_operator(sym)==1)
        {
            op1=pop();
            op2=pop();
            switch(sym)
            {
                case '/':res=op1/op2;
                break;
                case '*':res=op1*op2;
                break;
                case '+':res=op1+op2;
                break;
                case '-':res=op1-op2;
                break;
            }
            push(res);
        }
        else if(sym==' ' || sym=='\t')
        {
            continue;
        }
        else
        {
            printf("\nINVALID CHAR %c",sym);
            exit(0);
        }
    }
    res=pop();
    return res;
}
void main()
{
    char postfix[size];
    int result;
    printf("Enter postfix expression:");
    gets(postfix);
    result=evaluate(postfix);
    printf("\n%s=%d",strrev(postfix),result);
}