#include<stdio.h>
int main()
{
    //Prefix Increment / Decrement
    int x = 8 ;
    printf("x = %d\t",x);
    printf("x = %d\t",++x);
    printf("x = %d\t",x);
    printf("x = %d\t",--x);
    printf("x = %d\t",x);
    printf("\n");

    //Postfix Increment / Decrement
    int y = 8 ;
    printf("y = %d\t",y);
    printf("y = %d\t",y++);
    printf("y = %d\t",y);
    printf("y = %d\t",y--);
    printf("y = %d\t",y);
    printf("\n");

    return 0;
}