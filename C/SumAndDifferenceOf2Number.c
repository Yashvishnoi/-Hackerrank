#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float c,d,q,g;
    int a,b,s,y;
   // printf("enter the values of a&b");
    scanf("%d%d",&a,&b);
   // printf("enter the values of c&d");
    scanf("%f%f",&c,&d);
    s=a+b;
    y=a-b;
    q=c+d;
    g=c-d;
    printf("%d %d\n%.1f %.1f", s, y, q, g);
    
    return 0;
}
