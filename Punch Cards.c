#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void punch_card(int r,int c)
{
    //first line (starting with two dots)
    printf("..");
    for (int y=2;y<=c;y++)
        printf("+-");
    printf("+\n");
    //rest of the lines
    for(int x=1;x<=r;x++)
    {
        if(x==1)
        {
            printf("..");
            for (int y=2;y<=c;y++)
                printf("|.");
            printf("|\n");
        }
        else
        {
            for (int y=1;y<=c;y++)
                printf("|.");
            printf("|\n");
        }
        for (int y=1;y<=c;y++)
            printf("+-");
        printf("+\n");
    }
}

int main()
{
    int i=0;
    char line[255];
    fgets(line, 255, stdin);    //number of tests in the file
    int t=atoi(line);
    i++;
    while(i<=t)
    {
        fgets(line, 255, stdin);    //number of rows and colums
        printf("Case #%d:\n",i);
        char* srow= strtok(line, " ");
        int row = atoi(srow);
        char* scolum= strtok(NULL, " ");
        int colum = atoi(scolum);
        punch_card(row,colum);
        i++;
    }
    return 0;
}
