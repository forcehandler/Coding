#include<stdio.h>
int main()
{
    int n,m,i,j,k,flag,count,count1;
    int f=0;
    long long int a[100001],p[100001];
    char cons,first,ch[100001];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    for(i=0;i<n;i++)
    {
        count=0;
        count1=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
                break;
            else
                count++;
        }
        for(k=i-1;k>=0;k--)
        {

            if(a[i]<a[k])
                break;
            else if(a[i]==a[k])
               {
                   //count1=0;
                   break;
               }
            else
                count1++;
        }
        if(count1==0 && count==0)
            p[i]=1;
        else if(count==0 && count1!=0)
        {
            //printf("%d\n",count1);
            p[i]=count1+1;
        }
        else if(count1==0 && count!=0)
            p[i]=count+1;
        else
            p[i]=(count+1)*(count1+1);
    }
    for(i=0;i<n;i++)
    {
        printf("%lld\n",p[i]);
    }
    while(m--)
    {

        int ans=0;
        scanf(" \n%c",&cons);
        scanf("%d",&flag);
        scanf(" %c",&first);
        if(cons=='>')
        {
            for(i=0;i<n;i++)
            {
                if(a[i]>flag)
                {
                    ans=ans+p[i];
                }
            }
            //printf("%d\n",ans);
            if(first=='D')
         {
              if(ans%2==0)
                    ch[f++]='C';
                 else
                   ch[f++]='D';
         }
         else if(first=='C')
         {
             if(ans%2==0)
                     ch[f++]='D';
                 else
                     ch[f++]='C';
         }
        }
        else if(cons=='<')
        {

            for(i=0;i<n;i++)
            {
                if(a[i]<flag)
                {
                    ans=ans+p[i];
                }
            }
            //printf("%d\n",ans);
                 if(first=='D')
         {
              if(ans%2==0)
                     ch[f++]='C';
                 else
                     ch[f++]='D';
         }
         else if(first=='C')
         {
             if(ans%2==0)
                     ch[f++]='D';
                 else
                     ch[f++]='C';
         }
        }
        else if(cons=='=')
        {

            for(i=0;i<n;i++)
            {
                if(a[i]==flag)
                {
                    ans=ans+p[i];
                }
            }
           // printf("%d\n",ans);
                 if(first=='D')
         {
              if(ans%2==0)
                     ch[f++]='C';
                 else
                     ch[f++]='D';
         }
         else if(first=='C')
         {
             if(ans%2==0)
                     ch[f++]='D';
                 else
                     ch[f++]='C';
         }
        }

    }
       printf("%s",ch);

  return 0;
}
