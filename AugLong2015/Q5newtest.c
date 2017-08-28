#include<stdio.h>
int main()
{
    unsigned long long n,m,i,j,k,l,a[10000],b[10000][4],storeg,pos,countl,countr,calc,countg;
    scanf("%llu%llu",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%llu",&a[i]);
    }
    k=1;
    countr=0,countl=0;
    b[0][0]=a[0];   //value
    b[0][1]=0;  //lhs
    while(a[i]>a[k])
    {
        countr++;
        k++;
        if(k==n)
            break;
    }
    b[0][2]=countr;
            calc=countl+countr+(countl*countr)+1;
            b[0][3]=calc;
    countg=countr;
    pos=0;
    for(i=1;i<n;i++)
    {
        if(i<=(pos+countg))
        {
                    printf("present in i<=\n");
            countl=0, countr=0;

            k=i+1;
                if(k==n);
                else
                {
                    while(a[i]>a[k])
                    {
                    countr++;
                    k++;
                    if(k==n)
                        break;
                    }
                }

            b[i][0]=a[i];
            k=i-1;
            while(a[i]>a[k])
            {
                countl++;
                k--;
                if(k==-1)
                    break;
            }
            //
                    calc=countl+countr+(countl*countr)+1;

                    b[i][1]=countl;
                    b[i][2]=countr;
            b[i][3]=calc;
        }
        else
        {
            printf("present in else i<=\n");
                if(countg==0)
                    pos=0;
            pos=i;
            countl=countg+1;
                    printf("countl=%llu\n",countl);
            countg=0,countr=0;
            k=i+1;
                    if(k==n)
                    {

                    }
                    else
                    {
                        while(a[i]>a[k])
                    {
                        countr++;
                        k++;
                        if(k==n)
                            break;
                    }
                    }

            countg=countr;
            b[i][0]=a[i];

                    calc=countl+countr+(countl*countr)+1;


                    b[i][1]=countl;
                    b[i][2]=countr;
                    b[i][3]=calc;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("val=%llu",b[i][0]);
        printf("  freq=%llu\n ",b[i][3]);
    }

}
