#include<stdio.h>
int main()
{
    unsigned long long n,m,i=0,j,k,l=0,a[10000],b[10000][4],storeg,pos,countl,countr,calc,countg;
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
    for(i=0;i<n;i++)
    {
        printf("val=%llu",b[i][0]);
        printf("  freq=%llu\n ",b[i][3]);
    }
    unsigned long long num,count;
    char o,name;
    while(m--)
    {
        scanf(" %c",&o);
        scanf("%d",&num);
        scanf(" %c",&name);
        count=0;
        if(o=='=')
        {
            for(i=0;i<n;i++)
            {
                if(b[i][0]==num)
                    count+=b[i][3];
            }
        }
        else if(o=='>')
        {
            for(i=0;i<n;i++)
            {
                if(b[i][0]>num)
                    count+=b[i][3];
            }
        }
        else if(o=='<')
        {
            for(i=0;i<n;i++)
            {
                if(b[i][0]<num)
                    count+=b[i][3];
            }
        }
        if(count%2==0)
        {
            if(name=='D')
                soln[l++]='C';

            else
                soln[l++]='D';

        }
        else
        {
            if(name=='D')
                soln[l++]='D';
            else
                soln[l++]='C';
        }
        //printf("%llu\n",count);

    }
    printf("%s",soln);
return 0;

}
