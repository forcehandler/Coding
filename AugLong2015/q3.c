#include <stdio.h>
int main()
{
    unsigned long long i, j=1, k, l, a=0, b=1, c=1;
    unsigned long long look[100000];
     for(i=1;i<100000;i++)
        {
            c=a+b;
            a=b;
            b=c;
            look[i]=c;
        }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        j=1,a=0,b=1,c=1;

        scanf("%llu",&l);
        while(l>look[j])
        {
            j++;
        }
        if(l==look[j])
        {
            printf("%llu\n",j);
            continue;
        }

        else
        {
            printf("%llu\n",(j-1));
            continue;
        }

    }
}
