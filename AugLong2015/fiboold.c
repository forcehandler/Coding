#include<stdio.h>
#include <time.h>

//int lookup[100000]={-1};
int main()
{
    clock_t start = clock();
    //printf("%d",lookup[4]);
    int in=45;
    //scanf("%d",&in);
    printf("%d",fibo(in));
    clock_t stop = clock();
    double elapsed = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
    printf("\nTime elapsed in ms: %f", elapsed);

}
int fibo(int a)
{
    if(a==1||a==0)
    {

        return 1;
    }
    return(fibo(a-1)+fibo(a-2));

}
