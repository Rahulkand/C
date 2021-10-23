#include <stdio.h>
#include <string.h>
int main()
{
    char a[25],b[20];
    int i,j,flag=0,k=0;
    printf("enter the string: ");
    scanf("%s",a);
    b[k]=a[k];
    for(i=0;i< strlen(a);i++)
    {
        flag=0;

       for(j=0;j< strlen(b);j++)
       {
           if(a[i]==b[j])
           {
               flag=1;
               break;
           }

       }
       if(flag==0)
       {
           b[j]=a[i];

       }
       else
       {
           continue;
       }


    }
    for(i=0;i< strlen(b);i++)
    {
        printf("%c",b[i]);
    }
    return 0;

}




