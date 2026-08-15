#include<stdio.h>
#include<stdlib.h>
#define size 10 
struct stack
{
    int arr[size];
    int top;
};
void push(struct stack *ps,int item)
{
    ps->top=(ps->top)+1;
    ps->arr[ps->top]=item;
}
int pop(struct stack *ps)
{
    int temp;
    temp=ps->arr[ps->top];
    ps->top=(ps->top)-1;
    return temp;
}
int peep(struct stack *ps)
{
    return ps->arr[ps->top];
}
void main()
{
    struct stack s1,s2,s3;
    s1.top=-1;
    s2.top=-1;
    s3.top=-1;
    int i,ch,item;
    while(1)
    {
        printf("\n1.PUSH IN S1\n2.POP S1\n3.PEEP S1\n4.PRINT S1\n5.PUSH IN S2\n6.POP S2\n7.PEEP S2\n8.PRINT S2\n9.PUSH IN S3\n10.POP S3\n11.PEEP S3\n12.PRINT S3\n13.EXIT");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(s1.top==size-1)
            {
                printf("\nSTACK OVERFLOW!");
            }
            else
            {
                printf("\nENTER VALUE TO BE PUSHED IN S1:");
                scanf("%d",&item);
                push(&s1,item);
            }
            break;
            case 2:if(s1.top==-1)
            {
                printf("STACK UNDERFLOW!");
            }
            else
            {
                item=pop(&s1);
                printf("\nELEMENT POPPED IN S1=%d",item);
            }
            break;
            case 3:if(s1.top==-1)
            {
                printf("\nSTACK UNDERFLOW!");
            }
            else
            {
                item=peep(&s1);
                printf("\nELEMENT PEEPED IN S1=%d",item);
            }
            break;
            case 4:printf("\nSTACK S1:");
            for(i=s1.top;i>=0;i--)
            {
                printf("\n%d",s1.arr[i]);
            }
            break;
            case 5:if(s2.top==size-1)
            {
                printf("\nSTACK OVERFLOW!");
            }
            else
            {
                printf("\nENTER VALUE TO BE PUSHED IN S2:");
                scanf("%d",&item);
                push(&s2,item);
            }
            break;
            case 6:if(s2.top==-1)
            {
                printf("STACK UNDERFLOW!");
            }
            else
            {
                item=pop(&s2);
                printf("\nELEMENT POPPED IN S2=%d",item);
            }
            break;
            case 7:if(s2.top==-1)
            {
                printf("\nSTACK UNDERFLOW!");
            }
            else
            {
                item=peep(&s2);
                printf("\nELEMENT PEEPED IN S2=%d",item);
            }
            break;
            case 8:printf("\nSTACK S2:");
            for(i=s2.top;i>=0;i--)
            {
                printf("\n%d",s2.arr[i]);
            }
            break;
            case 9:if(s3.top==size-1)
            {
                printf("\nSTACK OVERFLOW!");
            }
            else
            {
                printf("\nENTER VALUE TO BE PUSHED IN S3:");
                scanf("%d",&item);
                push(&s3,item);
            }
            break;
            case 10:if(s3.top==-1)
            {
                printf("STACK UNDERFLOW!");
            }
            else
            {
                item=pop(&s3);
                printf("\nELEMENT POPPED IN S3=%d",item);
            }
            break;
            case 11:if(s3.top==-1)
            {
                printf("\nSTACK UNDERFLOW!");
            }
            else
            {
                item=peep(&s3);
                printf("\nELEMENT PEEPED IN S3=%d",item);
            }
            break;
            case 12:printf("\nSTACK S3:");
            for(i=s3.top;i>=0;i--)
            {
                printf("\n%d",s3.arr[i]);
            }
            break;
            case 13:printf("\nEXITING");
            exit(0);
            default:
            printf("\nINVALID CHOICE!");
        }
    }
}