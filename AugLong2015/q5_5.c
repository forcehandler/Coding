#include<stdio.h>
int main()
{
    unsigned long long n, m, i, j ,k, l,c=0,d=0;
    scanf("%llu %llu", &n, &m);
    unsigned long long a[n];
    l=n*(n+1)/2;
    unsigned long long max[l];
    char soln[m];
    for(i=0;i<n;i++)
    {
        scanf("%llu",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(i==j)
            {
                max[c]=a[j];
                //printf("%llu   \n",max[i]);
            }

            else
            {
                if(a[j]>max[c-1])
                    max[c]=a[j];
                else
                    max[c]=max[c-1];
            }
            c++;
            //printf("%llu n",max[i]);
        }
    }
    //printf("over\n   ");
    //for(i=0;i<l;i++)
    {
        //printf("%llu   ",max[i]);
    }
    k=0;
    while(k<m)
    {
        char o, name;
        unsigned long long num, count=0;
        scanf(" %c",&o);
        scanf("%llu",&num);
        scanf(" %c",&name);
        if(o=='=')
        {
            for(i=0;i<l;i++)
            {
                if(max[i]==num)
                    count++;
            }
        }
       else if(o=='>')
        {
            for(i=0;i<l;i++)
            {
                if(max[i]>num)
                    count++;
            }
        }
       else if(o=='<')
        {
            for(i=0;i<l;i++)
            {
                if(max[i]<num)
                    count++;
            }
        }
        if(count%2==0)
        {
            if(name=='D')
                soln[k]='C';
            else
                soln[k]='D';
        }
        else
        {
            if(name=='D')
                soln[k]='D';
            else
                soln[k]='C';
        }
        k++;

    }
    for(i=0;i<k;i++)
        printf("%c",soln[i]);
    return 0;
}
