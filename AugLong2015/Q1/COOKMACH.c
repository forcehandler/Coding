#include<stdio.h>
int main()
{
    int test,c;
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

        count+=times(a,b);
        soln[c-1]=count;

    }
    unsigned long long i=0;
    for(;i<test;i++)
    {
        printf("%llu\n", soln[i]);
    }
    return 0;
}

   int times(unsigned long long a, unsigned long long b)
    {
        unsigned long long count=0;
        if(a==1||b==1)
        {
            if(a==1)
            {
                while(a!=b)
                {
                    a=a*2;
                    count++;
                }
            }
            else
            {
               while(a!=b)
                {
                    b=b*2;
                    count++;
                }
            }

        }
        else if(a>b)
        {
           while(a!=b)
           {
               a=a/2;
               count++;
           }
        }
        else
        {
            while(a!=b)
           {
               b=b/2;
               count++;
           }
        }
        return count;
    }
