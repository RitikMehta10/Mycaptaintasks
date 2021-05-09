#include <stdio.h>
int main()
{
    int a,b;
    a=10,b=5;//Assigned initial values to both variables.
    printf("Before swapping a=%d and b=%d\n",a,b);
    printf("-------------------------------------\n");
    a=a+b;//a=10+5=15
    b=a-b;//b=15-5=10
    a=a-b;//a=15-10=5
    printf("After swapping a=%d and b=%d\n",a,b);
    return 0;


}