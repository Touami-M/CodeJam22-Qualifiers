#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min(int x1,int x2,int x3)
{
    int minim=x1;
    if(x2<x1)
        minim=x2;
    if(x3<minim)
        minim=x3;
    return minim;
}

int main()
{
    int i=0;
    char line[50];
    fgets(line, 50, stdin); //number of tests
    int t=atoi(line);
    i++;
    while(i<=t)
    {
        printf("Case #%d: ",i);
        fgets(line, 50, stdin); //first printer

        char* sc1= strtok(line, " ");
        int c1 = atoi(sc1);
        char* sm1= strtok(NULL, " ");
        int m1 = atoi(sm1);
        char* sy1= strtok(NULL, " ");
        int y1 = atoi(sy1);
        char* sk1= strtok(NULL, " ");
        int k1 = atoi(sk1);

        fgets(line, 50, stdin); //second printer
        char* sc2= strtok(line, " ");
        int c2 = atoi(sc2);
        char* sm2= strtok(NULL, " ");
        int m2 = atoi(sm2);
        char* sy2= strtok(NULL, " ");
        int y2 = atoi(sy2);
        char* sk2= strtok(NULL, " ");
        int k2 = atoi(sk2);

        fgets(line, 50, stdin); //third printer
        char* sc3= strtok(line, " ");
        int c3 = atoi(sc3);
        char* sm3= strtok(NULL, " ");
        int m3 = atoi(sm3);
        char* sy3= strtok(NULL, " ");
        int y3 = atoi(sy3);
        char* sk3= strtok(NULL, " ");
        int k3 = atoi(sk3);


        int c=min(c1,c2,c3);
        int m=min(m1,m2,m3);
        int y=min(y1,y2,y3);
        int k=min(k1,k2,k3);

        if(c+m+y+k<1000000)
        {
            if(i==t)
                printf("IMPOSSIBLE");
            else
                printf("IMPOSSIBLE\n");
        }
        else
        {
            if (c+m+y+k==1000000)
            {
                if(i==t)
                    printf("%d %d %d %d",c,m,y,k);
                else
                    printf("%d %d %d %d\n",c,m,y,k);
            }
            else
            {
                int to_remove=c+m+k+y-1000000;

                    if((to_remove>=c)&&(c>0))
                    {
                        to_remove=to_remove-c;
                        c=0;

                    };
                    if((to_remove>=m)&&(m>0))
                    {
                        to_remove=to_remove-m;
                        m=0;

                    };
                    if((to_remove>=y)&&(y>0))
                    {
                        to_remove=to_remove-y;
                        y=0;

                    };
                    if((to_remove>=k)&&(k>0))
                    {
                        to_remove=to_remove-k;
                        k=0;

                    };



                    if((to_remove<c))
                    {
                        c=c-to_remove;
                        to_remove=0;
                    };
                    if((to_remove<m))
                    {
                        m=m-to_remove;
                        to_remove=0;
                    };
                    if((to_remove<y))
                    {
                        y=y-to_remove;
                        to_remove=0;
                    };
                    if((to_remove<k))
                    {
                        k=k-to_remove;
                        to_remove=0;
                    }

                    if(i==t)
                        printf("%d %d %d %d",c,m,y,k);
                    else
                        printf("%d %d %d %d\n",c,m,y,k);
            }
        }


        i++;
    }
    return 0;
}
