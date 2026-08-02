#include<stdio.h>
#include<stdlib.h>
#define size 10
int arr[size],top=-1;
void push(int item);
int pop();
int peep();
void main()
{
    int i,ch,item;
    while(1)
    {
        printf("\n1.PUSH\n2.POP\n3.PEEP\n4.PRINT\n5.EXIT");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(top==size-1)
            {
                printf("\nSTACK OVERFLOW!");
            }
            else
            {
                printf("\nENTER VALUE TO BE PUSHED:");
                scanf("%d",&item);
                push(item);
            }
            break;
            case 2:if(top==-1)
            {
                printf("STACK UNDERFLOW!");
            }
            else
            {
                item=pop();
                printf("\nELEMENT POPPED=%d",item);
            }
            break;
            case 3:if(top==-1)
            {
                printf("\nSTACK UNDERFLOW!");
            }
            else
            {
                item=peep();
                printf("\nELEMENT PEEPED=%d",item);
            }
            break;
            case 4:printf("\nSTACK:");
            for(i=top;i>=0;i--)
            {
                printf("\n%d",arr[i]);
            }
            break;
            case 5:printf("\nEXITING");
            exit(0);
            default:
            printf("\nINVALID CHOICE!");
        }
    }
}
void push(int item)
{
    top=top+1;
    arr[top]=item;
}
int pop()
{
    int temp;
    temp=arr[top];
    top=top-1;
    return temp;
}
int peep()
{
    return arr[top];
}