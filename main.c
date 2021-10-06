#include <stdio.h>

int main() {
    /***********************************Exercice n°1******************************/
    for(int i=5;i<=100;i+=5)
    {
        printf("%d\n",i);
    }


    int j=5;
    while(j<=100)
    {
        printf("%d\n",j);
        j+=5;
    }

    int k=5;
    do
    {
        printf("%d\n",k);
        k+=5;
    }
    while(k<=100);


    /***********************************Exercice n°2*******************************/
    enum {DEBUT=100,FIN=0,INCREMENT=10};

    for(int i=DEBUT;i>=FIN;i-=INCREMENT)
    {
        printf("%d\n",i);
    }
    /**********************************Exercice n°3***********************************/

    return 0;
}
