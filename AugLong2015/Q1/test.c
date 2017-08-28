#include<stdio.h>
#include<math.h>

int main()
{
    unsigned long long a[26]; // stores powers of 2
    int i=2;
    a[1]=1;
    for(;i<26;i++)
    a[i]=a[i-1]*2;

   // for(i=1;i<26;i++)
   // printf("%llu ", a[i]);

    int test, c=0;
    scanf("%d",&test);
    //unsigned int soln[test];

    while(c++<test)
    {
        unsigned long long x, y, i, j, count=0,found=0;
        scanf("%llu%llu",&x, &y);

        while(!found)
        {
            for(i=1;i<26;i++)
            {
                if(x==a[i])
                {
                    found=1;
                    break;
                }
            }
            if(found)
                break;
            if(x%2!=0)
            {
                x=(x-1)/2;
                count++;
            }
            else{
                x=x/2;
                count++;
            }
        }



        if(x!=1&&x%2!=0)
        {
            x=(x-1)/2;
            count++;
        }
        int pos[2]={0};
        for(i=1;i<26;i++)
        {
            if(x==a[i])
                pos[0]=i;
            if(y==a[i])
                pos[1]=i;
        }
        count+=abs(pos[1]-pos[0]);
        printf("%llu\n",count);
    }
    //unsigned int k=0;
    //for(;k<test;k++)
       // printf("%u\n",soln[k]);
}
