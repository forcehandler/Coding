#include<stdio.h>
int main()
{
    long long n, m,i,j,k,l,max=-1,calc,a=0,b=0;
    scanf("%lld%lld",&n,&m);
    long long freq[10000]={0},sto[1000][2]={0};
    for(i=0;i<n;i++)
    {
        scanf("%lld",&l);
        if(max<l)
            max=l;
        freq[l]++;
    }
    for(i=l;i>=0;i--)
    {
        if(freq[i]!=0)
        {
            calc=m*((2*i)-(m-1))/2;
            m=m-freq[i];
            sto[a][0]=i;
            sto[a][1]=calc;
            a++;
        }
    }
    for(i=0;i<a;i++)
    {
        printf("%lld %lld\n",sto[i][0],sto[i][1]);
    }

}
