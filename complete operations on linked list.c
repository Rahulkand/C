#include <stdio.h>
#include <stdlib.h>
typedef struct node node;
struct node
{
    int id;
    node *link;
};
int count=0;
node *root =NULL;
void append()
{
    node *ptr;
    ptr=(node*)malloc(sizeof (node*));
    printf("element\n");
    scanf("%d",&ptr->id);
    ptr->link=NULL;
    if(root==NULL)
    {
        root=ptr;
        count++;
    }
    else
    {
        node* p=root;
        while(p->link!=NULL)
        {
            p = p->link;
        }
        p->link=ptr;
        count++;
    }
}
void dis()
{
    node *dis=root;
    while (dis->link!=NULL)
    {
        printf("%d\n",dis->id);
        dis=dis->link;
    }
    printf("%d",dis->id);

}
void sort()
{
    node *i,*j;
    i=root,j=root;
    int temp;
    for(i=root;i!=NULL;i=i->link)
    {
        for(j=j->link;j!=NULL;j=j->link)
        {
            if(i->id>j->id)
            {
                temp=j->id;
                j->id=j->id;
                j->id=temp;
            }
        }
    }
    node *itr=root;
    while(itr->link!=NULL)
    {
        printf("%d",itr->id);
        itr=itr->link;
    }
    printf("%d",itr->id);

}

node* root_1=NULL;
void add()
{
    int ch_2=1;
    int ins;
    printf("where do u want insert the element\n");
    scanf("%d", &ins);
    while(ch_2)
    {

        node *qtr;
        qtr = (node *) malloc(sizeof(node *));
        printf("element\n");
        scanf("%d", &qtr->id);
        qtr->link = NULL;
        if (root_1 == NULL)
        {
            root_1 = qtr;
            count++;
        }
        else
        {
            node *q = root_1;
            while (q->link != NULL)
            {
                q = q->link;
            }
            q->link = qtr;
            count++;
        }
        printf("over?");
        scanf("%d",&ch_2);
    }
    if(ins==1)
    {
        node* fi=root_1;
        while(fi->link!=NULL)
        {

            fi=fi->link;
        }
        fi->link=root;
        root=root_1;
        root_1=NULL;
    }
    else
    {
        int i;
        node* any=root;
        node *save,*save1;
        for(i=0;i<ins-2;i++)
        {
            any=any->link;
        }
        save=any;
        save1=any->link;
        save->link=root_1;
        node* check=root;
        while(check->link!=NULL)
        {
            check=check->link;
        }
        check->link=save1;
        root_1=NULL;
    }
    node *pr=root;
    while(pr->link!=NULL)
    {
        printf("%d",pr->id);
        pr=pr->link;
    }
    printf("%d",pr->id);

}
void reverse()
{
    node *i,*q;
    int j,temp;
    i=root,q=root;
    for(j=0;j<count;j++)
    {
        int k;
        for(k=0;k<count-j-1;k++)
        {
            q=q->link;
        }
        temp=i->id;
        i->id=q->id;
        q->id=temp;
        i=i->link;
        q=root;
    }
    node* rtr=root;
    while(rtr->link!=NULL)
    {
        printf("%d",rtr->id);
        rtr=rtr->link;
    }
    printf("%d",rtr->id);



}
void delete()
{
    int del,count_1=0,run;
    node *del1=root,*super=root,*super_save;

    printf("enter the element to delete: ");
    scanf("%d",&del);
    while(del1!=NULL)
    {
        if(del1->id==del)
        {
            if(count_1>0)
            {
                for (run = 0; run < count_1 - 1; run++)
                {
                    super = super->link;
                }
                super_save = super->link->link;
                super->link = super_save;
            }
            else
            {
                root=super->link;
            }



        }
        count_1++;
        del1=del1->link;
    }
}
void main()
{
    int ch;
    while(1)
    {
        printf("choice\n");
        scanf("%d",&ch);
        if(ch==1)
        {
           append();
        }
        else if(ch==2)
        {
            dis();
        }
        else if(ch==3)
        {
            sort();
        }
        else if(ch==4)
        {
            add();
        }
        else if(ch==5)
        {
            reverse();
        }
      
        else if(ch==6)
        {

            delete();
        }
        else
        {
            break;
        }
    }

}
