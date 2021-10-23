#include<stdlib.h>
#include <stdio.h>
#include <math.h>

void main()
{
    int n,r,s[100],count=0,total=0;
    int i=0;
    printf("enter the number: \n");
    scanf("%d",&n);
    while(i<20 && n!= 0)
    {
        r=n%2;
        total= total+r*pow(2,i);
        n=n/2;
        s[i]=r;

        i++;
        count++;


    }
    for(i=count-1;i>=0;i--)
    {
        printf("%d",s[i]);
    }
    printf("\n");
    printf("%d",total);
}
