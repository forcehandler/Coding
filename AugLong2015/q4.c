#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
         int n=0, h=0, i, j,c=0,k=0, min=99999,p=0;
         int in[100000][2], stoem[n];

        scanf("%d %d",&n, &h);

        k=n-h+1;
        int soln[10000];
        for(i=0;i<n;i++)
        {
            stoem[i]=0;
        }
        //printf("n=%d\n",n);
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&in[i][0],&in[i][1]);
        }
        for(i=0;i<n;i++)
        {
            for(j=in[i][0];j<=in[i][1];j++)
            {
                stoem[j]++;
            }
        }
        //printf("n=%d\n",n);
        for(i=0;i<n;i++)
        {
            //printf("i=%d\n",i);
            //printf("stoem=%u \n ",stoem[i]);
        }


        for(i=0;i<k;i++)
            soln[i]=0;

        //printf("%d n-h+1\n",n-h+1);
        for(i=0;i<k;i++)
        {
            for(j=i;j<(h+i);j++)
            {
                p=n-stoem[j];
                soln[i]+= p;
                //printf("soln=%d n-stoem=%u  j=%d\n  h=%d\n",soln[i],(stoem[j]),j,h);
            }

        }
        //for(i=0;i<k;i++)
        {
            //printf("soln=%u \n",*(soln+i));
        }

        for(i=0;i<k;i++)
        {
            //printf("%d soln\n",soln[i]);
            if(soln[i]<min)
                min=soln[i];
                //printf("min=%d \n",min);
        }
        printf("%d\n",min);


    }
}
