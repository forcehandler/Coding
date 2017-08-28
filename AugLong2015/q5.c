#include<stdio.h>
int a[100000]={0};
int main()
{
    int t;
    //scanf("%d", &t);
    int max[100000]={0};
    int i, j, k, l,m,c=0,n;
    char o, name;
    int num;

        c=0;
        scanf("%d%d", &l,&n);
        m=(l*(l+1))/2;
        for(i=0;i<l;i++)
        {
            scanf("%d",&a[i]);
            //max[i]=a[i];
        }
        //printf("Done scanning array\n");
        for(j=0;j<l;j++)
                {
                    for(k=j;k<l;k++)
                    {
                //printf("passing %d and %d\n",j,k);
                        max[c]=find_max(j,k);
                        c++;
                //printf("returned max %d \n",max[c-1 ]);
                    }


                }
                //printf("Done storing max\n");
                //for(i=0;i<m;i++)
                {
                    //printf("%d ",max[i]);
                }
                //printf("Max over\n");
        while(n--)
        {
            //printf("playing n-%d game\n",n);
            int count=0;
            scanf(" %c",&o);
            scanf("%d",&num);
            scanf(" %c",&name);
            //printf("Scanned conditions\n");
            int i;
    if(o=='<')
    {
        for(i=0;i<m;i++)
        {
            if(num>max[i])
                count++;
                //printf("count in < %d\n",count);
        }
    }
    else if(o=='=')
    {
        for(i=0;i<m;i++)
        {
            if(num==max[i])
                count++;
                //printf("count in = %d\n",count);
        }
    }
    else if(o=='>')
    {
        for(i=0;i<m;i++)
        {
            if(num<max[i])
                count++;
                //printf("count in > %d\n",count);
        }
    }
    //printf("Done counting and count = %d\n", count);
            //count=counter(o,num,l);

            if(count%2==0)
            {
                if(name=='D')
                    printf("C\n");
                else
                    printf("D\n");
            }
            else
            {
                if(name=='D')
                    printf("D\n");
                else
                    printf("C\n");
            }
            //printf("Done printing finally\n");
        //printf("Entering storing zone\n");


        }

        //printf("Done storing\n");
        //for(j=0;j<m;j++)
        {
            //printf("%d\n", max[j]);
        }



}


int find_max(int g, int b)
{
    //printf("Entered function\n");
    int max=-1,i,j;
    for(i=g;i<=b;i++)
    {
        if(max<a[i])
        {

            max=a[i];
            //printf("Max is %d\n",max);
        }
    }
    return max;
}
