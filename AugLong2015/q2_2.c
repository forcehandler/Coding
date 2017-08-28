#include<stdio.h>
int main()
{
    unsigned int test, c=0;
    scanf("%d",&test);

  hello:  while(c++<test)
    {
        char s1[1000000];
        //printf("%d", strlen(s1));
        char s2[1000000];
        scanf("%s",s1);
        scanf("%s",s2);
        //printf("%d", strlen(s1));
        //printf("%d", strlen(s2));
        //printf("%s", s1);
        //printf("%s", s2);
        int flag=1,flag1=-99;
        unsigned int pos=0, jumps=0,i,j,k=0,f1=1,f2=1,k1=-1,k2=-1;
        int success = 0;

        for(j=0;j<strlen(s1);j++)
        {
            if(s1[j]=='#')
            {
                if(f1)
                {
                    f1=0;
                    k1=j;
                }
            }
            if(s2[j]=='#')
            {
                if(f2)
                {
                    f2=0;
                    k2=j;
                }
            }
            //printf("\n%df1 \n",f1);
            //printf("\n%df2 \n",f2);
            //printf("\n%dk1 \n",k1);
           // printf("\n%dk2 \n",k2);
            //printf("---------------\n");

           else if((k1!=-1&&k2!=-1))    //check if the previous condition is enough
                break;
        }

        if(k1>k2)
        {
          i=k1;
          pos=1;
        }

        else if(k2>k1)
        {
            i=k2;
            pos=2;
        }
        else
        {
            //if(k1==k2==1)
            //{
            //    printf("No\n");
            //    return 0;
           // }

            printf("No\n");
            goto hello;
        }


      //  printf("\n%d i \n",i);
       // printf("\n%d pos \n",pos);
        for(; i<strlen(s1);i++)
        {
           // printf("%c s1\n",s1[i]);
           // printf("%c s2\n",s2[i]);

            if(pos==1)
            {
              if(s1[i]=='#')
            {
                success=0;
                //if(i!=0 && s2[i-1]=='.')
                //{
                  //  jumps++;
                    //success=1;
                    //pos=2;
                //}
                if(s2[i]=='.')
                {

                    jumps++;
                    success=1;
                    pos=2;
                }

            }
           // printf("\n%d i \n",i);
           // printf("\n%d pos \n",pos);
            //printf("\n%d suc \n",success);
            //printf("--------\n");
            }
           else if(pos==2)
           {
             if(s2[i]=='#')
            {
                success=0;
                //if(i!=0 && s1[i-1]=='.')
                //{
                //    jumps++;
                //    success=1;
                //    pos=1;
                //   // i=i-1;
               // }
                if(s1[i]=='.')
                {
                    jumps++;
                    success=1;
                    pos=1;
                }

            }
           // printf("\n%d i \n",i);
           // printf("\n%d pos \n",pos);
           // printf("\n%d suc \n",success);
           // printf("--------\n");
           }

            //if(flag)
           // {
              //  flag=0;
               // jumps--;
            //}
            if(!success)
            {
                flag=-99;
                break;
            }


        }
        if(flag==-99)
            printf("No\n");
        else
        {
            printf("Yes\n");
            printf("%d\n",jumps);
        }

    }
    return 0;
}
