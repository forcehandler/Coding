#include<stdio.h>
int main()
{
    int n=0, m=0;
    scanf("%d%d", &n, &m);
    int i=0, j=0,k=0, l=0, c=0,d=0,z=m;
    l=(n*(n+1))/2;
    int a[n];
    int max[l];
    char soln[m];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            int maxi=-1;
            for(k=i;k<=j;k++)
            {
                if(maxi<a[k])
                {
                    maxi=a[k];
                }
            }
            max[c++]=maxi;
        }
    }
    while(m--)
    {
        char o, name;
       unsigned long long num, count=0;
        scanf(" %c",&o);
        scanf(" %llu",&num);
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
