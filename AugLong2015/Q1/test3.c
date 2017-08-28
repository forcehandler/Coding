#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    scanf("%d",&x);
    float g = log2(x);
    float h = fmod(g,1);
    if(h==0.0000)
        printf("yaay\n");
    //float k = ceil
    printf("%f", h);
}
