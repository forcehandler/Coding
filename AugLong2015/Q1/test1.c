#include<stdio.h>

int main()
{

    int test, c=0;
    scanf("%d",&test);

    while(c++<test)
    {
        unsigned long long x, y, i, j, count=0,found=0;
        scanf("%llu%llu",&x, &y);

        while(!found)
        {
            float g = log2(x);
            float h = fmod(g,1);
            if(h==0.0000)
                found=1;
            if(found)
                break;
            if(x%2!=0)
            {
                x=(x-1)/2;
                count++;
            }
            else{
                x=x/2;
                count++;
            }
        }
        int pos[2]={0};
        pos[0]=log2(x);
        pos[1]=log2(y);
        count+=abs(pos[1]-pos[0]);
        printf("%llu\n",count);
    }

}
