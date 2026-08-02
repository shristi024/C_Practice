#include<stdio.h>
#define max 10
void input(int arr[],int n)
{
    int i;
    printf("\nEnter elements:");
    for(i=0;i<n;i++)
    {
        printf("\nElement %d:",i+1);
        scanf("%d",&arr[i]);
    }
}
void output(int arr[],int n)
{
    int i;
    printf("\n\nArray:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
}
void insert(int arr[],int *pn,int item,int pos,int *ptop)
{
    int i;
    for(i=*pn-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=item;
    *pn=*pn+1;
    *ptop=*ptop+1;
}
void delete(int arr[],int *pn,int item,int *ptop)
{
    int i,pos=-1;
    for(i=0;i<=*pn;i++)
    {
        if(arr[i]==item)
        {
           pos=i;
           break;
        }
    }
    if(pos==-1)
    {
        printf("\nElement not found!");
    }
    else
    {
        for(i=pos;i<=*pn-1;i++)
        {
            arr[i]=arr[i+1];
        }
    }
    *pn=*pn-1;
    *ptop=*ptop-1;
}
void main()
{
    int n,arr[max],item,ch,pos;
    int top;
    printf("Enter size of array:");
    scanf("%d",&n);
    top=n-1;
    input(arr,n);
    while(1)
    {
        printf("\n1.Insert\n2.Delete");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(top==max-1)
            {
                printf("\nStack overflow");
            }
            else
            {
                printf("\nEnter element to be inserted:");
                scanf("%d",&item);
                printf("\nEnter the position the element to be inserted:");
                scanf("%d",&pos);
                insert(arr,&n,item,pos-1,&top);
                output(arr,n);
            }
            break;
            case 2:if(top==-1)
            {
                printf("\nStack underflow");
            }
            else
            {
                printf("\nEnter element to be deleted:");
                scanf("%d",&item);
                delete(arr,&n,item,&top);
                output(arr,n);
            }
            break;
        }
    }
}
