#include<stdio.h>
int main()
{
    int arr[10]={0,1,2,5,7,9,9};
    int cum[1000]={0};
    int i,j,k,l;
    for(i=0;i<7;i++)
    {
        if(i==0)
            cum[i]=arr[i];
        else
        cum[i]=arr[i]+cum[i-1];
        //printf("%d\n",cum[i]);
    }
    //printf("Cum over\n");
    l=0;
    for(i=2;i<7-3+1;i++)
    {
        if(i==2)
        {
            if((cum[i+1]-cum[i])>(cum[i-2]-0))
           {
               //printf("%d   %d\n",(cum[i+1]-cum[i]),(cum[i-2]-0));
                l=i-1;
           }
        }
        else if((cum[i+1]-cum[i])>(cum[i-2]-cum[i-3]))
           {
               //printf("%d   %d\n",(cum[i+1]-cum[i]),(cum[i-2]-cum[i-3]));
                l=i-1;
           }

    }
    //printf("%d\n",l);
}
