
#include <stdio.h>
int main()
{
    int a = 1;
    int b = 1;
    int c = 2;
    printf("Enter the values of three sides\n");
    if(a==b&&a!=c&&b!=c||(a==c&&a!=b&&b!=c)||b==c&&a!=b&&a!=c)
     { printf("triangle is isosceles\n");
     }
    
    return 0;
}