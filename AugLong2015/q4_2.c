#include<stdio.h>
int main()
{
    unsigned int t;
    scanf("%u",&t);
    while(t--)
    {
        unsigned long long n, h, i, j, l;
        long long min =999999;
        int in[100000][2];
        unsigned int stoem[100000]={0}, soln[100000]={0};
        scanf("%llu %llu", &n, &h);
        for(i=0;i<n;i++)
        {
            scanf("%d %d", &in[i][0], &in[i][1]);
            for(j=in[i][0];j<=in[i][1];j++)
            {
                stoem[j]++;
            }
        }

        for(i=0;i<(n-h+1);i++)
        {
            for(j=i; j<h+i; j++)
            {
                soln[i]+=(n-stoem[j]);
            }
        }
        for(i=0;i<n-h+1;i++)
        {
            if(min>soln[i])
                min=soln[i];
        }

        printf("%lld\n",min);
    }
}
