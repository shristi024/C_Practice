#include<stdio.h>
int main()
{
    int ar[10],n,i,j,pos,temp;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter the unsorted elements of the array:");
    for(i=0;i<n;i++)
     scanf("%d",&ar[i]);
     printf("Elements of unsorted array are:",ar[i]);
     for(i=0;i<n;i++)
     printf("%d",ar[i]);
     for(i=0;i<n;i++)
     {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(ar[pos]<ar[j])
            {
                pos=j;
            }
            if(pos!=i)
            {
                temp=ar[i];
                ar[i]=ar[pos];
                ar[pos]=temp;
            }
        }
        
    }
        printf("\nElements of sorted array are:");
        for(i=0;i<n;i++)
        printf("%d",ar[i]);
        return 0;
}
