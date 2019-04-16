#include <stdio.h>

void sub1();
void sub2();

int main()
{
    sub1();
    sub2();	

    return 0;
}

void sub1(){
 int a=30, b=50;
 printf("a+b=%d",a+b);
}

void sub2(){
 int a=50,b=20;
 printf("a+b=%d",a+b)
}
