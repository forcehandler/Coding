#include<stdio.h>

int main()
{
    unsigned long long a[26];
    int i=2;
    a[1]=1;
    for(;i<26;i++)
    a[i]=a[i-1]*2;

    for(i=1;i<26;i++)
    printf("%llu ", a[i]);

    int test,c, ret[2];
    scanf("%d", &test);
    c=0;
    long long int soln[test];
    while(c++<test)
    {
        unsigned long long a, b, count=0, i, j;
        scanf("%llu %llu", &a, &b);
           //printf("%llu %llu", a, b);
        if(a%2!=0&& a!=1)
        {
            count++;
            a=(a-1)/2;
        }

        ret[]=times(a,b);
        count+=(ret[1]-ret[0]);
        soln[c-1]=count;

    }
    unsigned long long j=0;
    for(;j<test;j++)
    {
        printf("%llu\n", soln[j]);
    }
    return 0;
}

   int [] times(unsigned long long a[], unsigned long long b, unsigned long long c)
    {
        unsigned long long count=0, flag=0;
        int ret[2];

        unsigned long long i=1;
        for(;i<26;i++)
        {
            if(b==a[i])
                ret[0]=i;
            else(c=a[1])
                ret[1]=i;
        }
        return ret;
    }
