/*
Here is a simple C program that illustrates the difference between ordinary arguments, which are
passed by value, and pointer arguments, which are passed by reference. 
*/
#include<stdio.h>
void func1(int a,int b){
    a=4;
    b=5;
    printf("The value of a and b in the calling func1\n");
    printf("a=%d, b=%d\n",a,b);
}
void func2(int *pa,int *pb){
    *pa=4;
    *pb=5;
    printf("The value of a and b in the calling func2\n");
    printf("a=%d, b=%d\n",*pa,*pb);
}

int main(){
    int a=1;
    int b=3;
    printf("Pass by value\n");
    printf("The value of a and b before calling func1\n");
    printf("a=%d, b=%d\n",a,b);
    // now call the func1
    func1(a,b);
    printf("The value of a and b after calling func1\n");
    printf("a=%d, b=%d\n",a,b);

    printf("\n\n\n");
    printf("Pass by reference/address/location\n");
    printf("The value of a and b before calling func2\n");
    printf("a=%d, b=%d\n",a,b);
    //// now call the func2
    func2(&a,&b);
    printf("The value of a and b after calling func2\n");
    printf("a=%d, b=%d\n",a,b);
    return 0;
}