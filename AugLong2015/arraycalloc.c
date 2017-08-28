#include<stdio.h>
int main()
{
    int s,i;
    scanf("%d",&s);
    unsigned int *a = (unsigned int *)calloc(s,sizeof(int));

    for(i=0;i<s;i++)
        printf("%d",a[i]);
}
