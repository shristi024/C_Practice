#include <stdio.h>
void add(int * n);
int main()
{
    int num=2;
    printf("value=%d",num);
    add(&num);
    printf("value now=%d",num);
    return 0;
}
void add(int * n)
{
    *n=*n+10;
    printf("value here=%d",*n);
}