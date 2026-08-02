#include<stdio.h>
int main()
{
    int i,j,temp,n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the unsorted elements of the array:");
    for(i=0;i<n;i++)
     scanf("%d",&ar[i]);
     printf("Elements of unsorted array are:",ar[i]);
     for(i=0;i<n;i++)
     printf("%d",ar[i]);
     for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
        
    }
    printf("\nElements of sorted array are:");
    for(i=0;i<n;i++)
    printf("%d",ar[i]);
    return 0;
}