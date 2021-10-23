#include <stdio.h>
#include <stdlib.h>
int *ptr,a=-1;
int *qtr;
int isfull()
{
    if(a==4-1)    /*here its user choice to select the how many element they wanna store so that is "n-1"*/
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push()
{
    if(isfull())
    {
        printf("memory is full\n");
    }
    else
    {
        a++;
        printf("element: ");
        scanf("%d",ptr);
        ptr++;

    }
}

int isempty()
{
    if(a==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void pop()
{
    if(isempty())
    {
        printf("no element\n");
    }
    else
    {
        ptr--;
        printf("%d",*ptr);
        a--;

    }

}
void main()
{
    int ch;
    ptr=(int*)malloc(4*sizeof (int)); /*here 4 can be used as a "n" variable to where user can select the size of the stack they want*/
    qtr=ptr;
    while(1)
    {
        printf("enter the choice: ");
        scanf("%d",&ch);
        if(ch==1)
        {
            void (*p)();
            p=&push;
            p();

        }
        else if(ch==2)
        {
            pop();
        }
        else
        {
            break;
        }

    }

}
