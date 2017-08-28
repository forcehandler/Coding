#include<stdio.h>
int a[100000]={0};
int main()
{
    int t;
    scanf("%d", &t);
    int max[100000]={0};
    int i, j, k, l,m,c=0,n;
    while(t--)
    {
        c=0;
        scanf("%d%d", &l,&n);
        m=(l*(l+1))/2;

        for(i=0;i<l;i++)
        {
            scanf("%d",&a[i]);
            //max[i]=a[i];
        }
        //printf("Entering storing zone\n");
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
        //printf("Done storing\n");
        for(j=0;j<m;j++)
        {
            //printf("%d\n", max[j]);
        }


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
