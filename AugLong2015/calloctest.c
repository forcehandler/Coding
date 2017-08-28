#include<stdio.h>
int main()
{
    int *ptr;
    int c,i,d;
    scanf("%d",&c);
    scanf("%d",&d);
    ptr = (int*)calloc(c+d-1, sizeof(int));
    for(i=0;i<c+d-1;i++)
    {
        printf("%d ",*(ptr+i));
    }
}
