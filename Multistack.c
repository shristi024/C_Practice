#include<stdio.h>
#include<stdlib.h>
#define size 10
int arr[size];
int topA=-1,topB=size;
void pushA(int item)
{
    topA=topA+1;
    arr[topA]=item;
}
int popA()
{
    int temp;
    temp=arr[topA];
    topA=topA-1;
    return temp;
}
int peepA()
{
    return arr[topA];
}
void pushB(int item)
{
    topB=topB-1;
    arr[topB]=item;
}
int popB()
{
    int temp;
    temp=arr[topB];
    topB=topB+1;
    return temp;
}
int peepB()
{
    return arr[topB];
}
void main()
{
    int item,ch,i;
    while(1)
    {
        printf("\n1.PUSH IN A\n2.POP A\n3.PEEP A\n4.PRINT A\n5.PUSH IN B\n6.POP B\n7.PEEP B\n8.PRINT B\n9.PRINT WHOLE ARRAY\n10.EXIT");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(topA+1==topB)
            {
                printf("\nSTACK OVERFLOW!");
            }
            else
            {
                printf("\nENTER VALUE TO BE PUSHED IN A:");
                scanf("%d",&item);
                pushA(item);
            }
            break;
            case 2:if(topA==-1)
            {
                printf("STACK UNDERFLOW!");
            }
            else
            {
                item=popA();
                printf("\nELEMENT POPPED IN A=%d",item);
            }
            break;
            case 3:if(topA==-1)
            {
                printf("\nSTACK UNDERFLOW!");
            }
            else
            {
                item=peepA();
                printf("\nELEMENT PEEPED IN A=%d",item);
            }
            break;
            case 4:printf("\nSTACK A:");
            for(i=topA;i>=0;i--)
            {
                printf("\n%d",arr[i]);
            }
            break;
            case 5:if(topB-1==topA)
            {
                printf("\nSTACK OVERFLOW!");
            }
            else
            {
                printf("\nENTER VALUE TO BE PUSHED IN B:");
                scanf("%d",&item);
                pushB(item);
            }
            break;
            case 6:if(topB==size)
            {
                printf("STACK UNDERFLOW!");
            }
            else
            {
                item=popB();
                printf("\nELEMENT POPPED IN B=%d",item);
            }
            break;
            case 7:if(topA==size)
            {
                printf("\nSTACK UNDERFLOW!");
            }
            else
            {
                item=peepB();
                printf("\nELEMENT PEEPED IN B=%d",item);
            }
            break;
            case 8:printf("\nSTACK B:");
            for(i=topB;i<size;i++)
            {
                printf("\n%d",arr[i]);
            }
            break;
            case 9: printf("\nWHOLE ARRAY:");
            for(i=0;i<=topA;i++)
            {   
                printf("\nARRAY[%d]-->%d",i,arr[i]);
                if(arr[i]==arr[topA])
                printf(" -->TOP A");
            }
            for(i=topA+1;i<topB;i++)
            {
                arr[i]=0;
                printf("\nARRAY[%d]-->VACANT",i);
            }
            for(i=topB;i<size;i++)
            {
                printf("\nARRAY[%d]-->%d",i,arr[i]);
                if(arr[i]==arr[topB])
                printf(" -->TOP B");
            }
            break;
            case 10:printf("\nEXITING");
            exit(0);
            default:
            printf("\nINVALID CHOICE!");
        }
    }
}