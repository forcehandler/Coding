#include<stdio.h>
int main()
{
    unsigned long long n,m,i=0,j,k,d=0,a[10000],b[10000][4],storeg,pos,countl,countr,calc,countg;
    char soln[10000];
    scanf("%llu%llu",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%llu",&a[i]);
    }

    for(i=0;i<n;i++)
    {

        {
                    //printf("present in i<=\n");
            countl=0, countr=0;

            k=i+1;
                if(k==n)
                {

                }
                else
                {
                    while(a[i]>=a[k])
                    {
                    countr++;
                    k++;
                    if(k==n)
                        break;
                    }
                }

            b[i][0]=a[i];
            k=i-1;
            if(k==-1)
            {

            }
            else
            {
                 while(a[i]>a[k])
                {
                    countl++;
                    k--;
                    if(k==-1)
                        break;
                }
            }

            //
                    calc=countl+countr+(countl*countr)+1;

            b[i][3]=calc;
        }

    }
    //for(i=0;i<n;i++)
    {
        //printf("val=%llu",b[i][0]);
        //printf("  freq=%llu\n ",b[i][3]);
    }
    unsigned long long freq[10000]={0};
    for(i=0;i<n;i++)
    {
        freq[b[i][0]]+=b[i][3];
    }
     for(i=0;i<n;i++)
    {
        printf("%llu ",freq[b[i][0]]);
    }

    unsigned long long num,count;
    char o,name;
    while(m--)
    {
        count=0;
        scanf(" %c",&o);
        scanf("%llu",&num);
        scanf(" %c",&name);

        if(o=='=')
        {
            count=freq[num];
            printf("%llu\n",count);
        }
       else if(o=='>')
        {
            for(i=num+1;i<10000;i++)
            {
                count+=freq[i];
            }
            printf("%llu\n",count);
        }
       else if(o=='<')
        {
            num=num-1;
            while(num>=0)
            {
                printf("%llu\n",num);
                count+=freq[num];
                num=num-1;
            }
            printf("%llu\n",count);
        }
        if(count%2==0)
        {
            if(name=='D')
                soln[d++]='C';
            else
                soln[d++]='D';
        }
        else
        {
            if(name=='D')
                soln[d++]='D';
            else
                soln[d++]='C';
        }

    }
    printf("%s",soln);
return 0;

}
