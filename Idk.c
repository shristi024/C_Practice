#include<stdio.h>
void main()
{
    /*1. even or odd
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%2==0)
    printf("The number is even");
    else
    printf("The number is odd");*/

    //2.implement array
    int i,ar[20],n;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
        printf("Array is:");
    for(i=0;i<n;i++)
        printf("\n Element[%d]=%d",i,ar[i]);
    
    /*3.selection sorting
    int small,i,j,n,pos,ar[20];
    small=ar[i];
    pos=i;
    for(j=i+1;j=n-1;j++)
     if (small > ar[j])
       small=ar[j]*/

       
}
