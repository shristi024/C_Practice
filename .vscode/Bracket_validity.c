#include<stdio.h>
char stack[size]
#define size 10
int match(char l, char r)
{
    if(l=='(' && r==')')
    return 1;
    else if(l=='{' && r=='}')
    return 1;
    else if(l=='[' && r==']')
    return 1;
    else return 0;
}
int_valid(char *exp)
{
    int i;
    char temp,sym;
    for(i=0;i<strlen(sym);i++)
    {
        sym=*(exp+1)
        if(sym=='(' || sym=='[' || sym=='{')
        push(sym);
        else if(sym==')' || sym==']' || sym=='}')
        {
            if(top==-1)
            {
                printf("Right bracket %c is more",sym)
                return 0;
            }
            else
            {
                temp=pop();
                if(match(temp,sym)==0)
                {
                    printf("")
                }
            }
        }
    }
}
void main()
{
    char exp[size];
    int ans;
    printf("Enter an expression");
    gets(exp);
    ans=is_valid(exp);
    if(ans==1)
    {
        printf("Exp is VALID");
    }
    else
    {
        printf("Exp is INVALID");
    }
}