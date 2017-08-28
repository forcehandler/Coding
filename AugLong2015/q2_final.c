#include<stdio.h>
int main()
{
    unsigned int t;
    scanf("%u",&t);

    yo: while(t--)
    {
        unsigned long long i, j=-1, k, pos, jumps=0,p1=-1,p2=-1,f1=1,f2=1;
        char s1[1000000];
        char s2[1000000];
        scanf("%s %s", s1,s2);

        for(i=0;s1[i]!='\0';i++)
        {
            if(f1)
            {
                if(s1[i]=='#')
                {
                    f1=0;p1=i;
                }
            }
            if(f2)
            {
                if(s2[i]=='#')
                {
                    f2=0;p2=i;
                }
            }

           if(p1!=-1&&p2!=-1)
            break;
        }
        j=p1>p2?p1:p2;
        pos=p1>p2?1:2;


        // working till here

        for(;s1[j]!='\0';j++)
        {
           if(pos==1)
           {
               if(s1[j]=='#')
               {
                   if(s2[j]=='#')
                   {
                       printf("No\n");
                       goto yo;
                   }
                   jumps++;
                   pos=2;
               }
           }
           if(pos==2)
           {
               if(s2[j]=='#')
               {
                   if(s1[j]=='#')
                   {
                       printf("No\n");
                       goto yo;
                   }
                   jumps++;
                   pos=1;
               }
           }
        }
        printf("Yes\n");
        printf("%llu\n",jumps);
    }
}
