#include <stdio.h>

int main () {
    int a,b,c,d;
    printf("input the second : ");
    scanf("%d", &a);

    b = a /3600;
    c= a%3600/60;
    d= a%3600%60;
    printf("The time for %d second is %d : %d :%d \n", a,b,c,d) ;  

        return 0;



    


}