#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int i=0;
    char line[255];
    fgets(line, 255, stdin);    //number of tests
    int t=atoi(line);
    i++;
    while(i<=t)
    {
        printf("Case #%d: ",i);
        fgets(line, 255, stdin);    //number of dice
        int N = atoi(line);
        fgets(line, 255, stdin);    //number of sides for each dice peace
        int tab[10];    //since the number of dice is less than 10 for the first test
        int state[10];  //state==1 if dice is used in the straight, else state==0
        int ind=0;

        char * dice = strtok(line, " ");
        while( dice != NULL ) {

            tab[ind]= atoi(dice);
            dice = strtok(NULL, " ");
            ind++;
        }
        for(ind=0;ind<N;ind++)
        {

            state[ind]=0;
        }
        int length=0;
        int nb_passes=0;
        while(nb_passes!=N)
        {
            nb_passes++;
            int current_nb=21;
            int current_ind=10;
            for(ind=0;ind<N;ind++)
            {
                if((tab[ind]<current_nb)&&(state[ind]!=1))
                {
                    current_nb=tab[ind];
                    current_ind=ind;
                }
            }
            state[current_ind]=1;
            if(length+1<=current_nb)
                length++;


        }
        printf("%d\n",length);
        i++;
    }
    return 0;
}
