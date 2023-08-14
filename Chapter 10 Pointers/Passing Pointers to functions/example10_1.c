/*
Shown below is a simple program that illustrates the relationship between two integer variables, their
corresponding addresses and their associated pointers.
*/
#include<stdio.h>
int main(){
    int x,*px;
    int y,*py;
    printf("Enter the value of x:");
    scanf("%d",&x);
    px=&x;
    y=*px;
    py=&y;

    printf("\n\n");
    printf("x=%d, &x=%x, px=%x, *px=%d",x,&x,px,*px);
    printf("\n");
    printf("y=%d &y=%x py=%x *py=%d",y,&y,py,*py);

    return 0;
}