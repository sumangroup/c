/*
An indirect reference can also appear on the left side of an assignment statement. This provides another
method for assigning a value to a variable or an array element.
*/
#include<stdio.h>
int main(){
    int x=5,*px;
    px=&x;
    printf("x=%d &x=%x px=%x *px=%d",x,&x,px,*px);
    printf("\n\n");
    *px=10;
    printf("x=%d &x=%x px=%x *px=%d",x,&x,px,*px);
    return 0;
}
