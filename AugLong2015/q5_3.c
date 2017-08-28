#include<stdio.h>
#include <time.h>
#include <stdlib.h>
unsigned long long a[10000];
unsigned long long max[10000];
char soln[10000];
int main()
{

    unsigned long long n=0, m=0;
    scanf("%llu%llu", &n, &m);
    unsigned long long i=0, j=0,k=0, l=0, c=0,d=0,z=m;
    l=(n*(n+1))/2;

    for(i=0;i<n;i++)
    {
        scanf("%llu",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(i==j)
                max[c]=a[j];
            else
            {
                if(a[j]>max[c-1])
                    max[c]=a[j];
                else
                    max[c]=max[c-1];
            }
            c++;
        }
    }
    for(i=0;i<c;i++)
    {
        printf("%llu   ",max[i]);
    }
    int freq[10000]={0};
    for(i=0;i<l;i++)
    {
        freq[max[i]]++;
    }
   while(m--)
    {
        char o, name;
        int num, count=0;
        //scanf(" %c",&o);
        //scanf(" %d",&num);
        //scanf(" %c",&name);
        o=
        if(o=='=')
        {
            count=freq[num];
            //printf("%d\n",count);
        }
       else if(o=='>')
        {
            for(i=num+1;i<10000;i++)
            {
                count+=freq[i];
            }
            //printf("%d\n",count);
        }
       else if(o=='<')
        {
            num--;
            while(num>=0)
            {
                count+=freq[num];
                num--;
            }
            //printf("%d\n",count);
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
    printf("%s\n",soln);
    return 0;
}
