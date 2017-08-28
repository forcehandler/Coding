#include<stdio.h>
#include <time.h>
#include <stdlib.h>
unsigned long long lookup[100000]={-1};
int main()
{
    int i, n;
    time_t t;
    clock_t start = clock();
    srand((unsigned) time(&t));
    //printf("%d",lookup[4]);
    int in=rand() % 50;
    //scanf("%d",&in);
    printf("%d",fibo(in));
    clock_t stop = clock();
    double elapsed = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
    printf("\nTime elapsed in ms: %f", elapsed);

}
int fibo(int a)
{
    if(lookup[a]!=0)
        return lookup[a];
    if(a==1||a==0)
    {
        lookup[0]=1;
        lookup[1]=1;
        return 1;
    }
    lookup[a]=fibo(a-1)+fibo(a-2);
    return lookup[a];
}
