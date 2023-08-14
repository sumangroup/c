/* 
    Consider the following C program below
*/
#include<stdio.h>
int main(){
    int u1,u2;
    int v=3,*pv;

    u1=2*(v+5);
    printf("u1=%d",u1);
    printf("\n\n");

    pv=&v;
    u2=2*(*pv+5);
    printf("u2=%d",u2);
    return 0;
}