#include <stdio.h>

int main () {
    int x, y;

    printf("input the year :");
    scanf("%i", &x);    
    y = x % 4 == 0 && x % 100 != 0 || x % 400 == 0;
   
    printf(" is the tear %i the leap year? : %i\n", x, y); 
    return 0;



}