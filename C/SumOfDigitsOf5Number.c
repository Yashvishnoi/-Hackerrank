#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum=0,i,y;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        y=i%10;
        sum=sum+y;
        //printf("%d",sum);
    }
    printf("%d",sum);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}

