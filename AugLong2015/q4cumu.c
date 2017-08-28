#include<stdio.h>
int main()
{
    unsigned int t;
    scanf("%u",&t);
    while(t--)
    {
        unsigned long long n, h, i, j, k=0, l,cum[10000];
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
        //for(i=0;i<n;i++)
            //printf("%d ",stoem[i]);
            //printf("\n ");

        for(i=0;i<n;i++)
        {
        if(i==0)
            cum[i]=stoem[i];
        else
        cum[i]=stoem[i]+cum[i-1];
        //printf("%d\n",cum[i]);
        }
        //for(i=0;i<n;i++)
           // printf("%d \n",cum[i]);

        l=0;
    for(i=h-1;i<n-h+1;i++)
    {
        if(i==(h-1))
        {
            if((cum[i+1]-cum[i])>(cum[i-h+1]-0))
           {
              // printf("I%llu\n",i);
              // printf("I+1%llu I%llu I-H+1%llu\n",i+1,i,i-h+1);
               //printf("%llu   %llu\n",(cum[i+1]-cum[i]),(cum[i-h+1]-0));
                l=i-h+2;
               // printf("l=%llu \n",l);
           }
        }
        else if(i==(n-h+1))
        {
            if((cum[i])>(cum[i-h+1]-cum[i-h]))
           {
              // printf("I%llu\n",i);
              // printf("I+1%llu I%llu I-H+1%llu\n",i+1,i,i-h+1);
               //printf("%llu   %llu\n",(cum[i+1]-cum[i]),(cum[i-h+1]-0));
                l=i-h+2;
               // printf("l=%llu \n",l);
           }

        }
        else if((cum[i+1]-cum[i])>(cum[i-h+1]-cum[i-h]))
           {
               //printf("%llu %llu %llu %llu\n",i+1,i,i-h+1,i-h);
               //printf("%llu   %llu\n",(cum[i+1]-cum[i]),(cum[i-h+1]-cum[i-h]));
                l=i-h+2;
                //printf("l=%llu \n",l);
           }

    }
    //printf("\nl=%llu ",l);
    for(i=l;i<h+l;i++)
    {
        k+=stoem[i];
        //printf("\nk=%llu ",k);
    }

        printf("%llu \n",((n*h)-k));
    }
}
