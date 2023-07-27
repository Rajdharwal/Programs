#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;

};
struct node *START=NULL;
struct node *createNode()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return(n);
}
void insertNode()
{
    struct node *temp,*t;
    temp = createNode();
    printf("Enter node information\n");
    scanf("%d",&temp->info);
    temp->link = NULL;
    if(START == NULL)
    {
        START = temp;
        t=temp;
    }
    else{
         t->link =temp;
         t=temp;
    }
}
void deleteNode()
{
    struct node *r;
    if(START == NULL)
    {
        printf("List is empty");
    }
    else{
        r=START;
        START=START->link;
        free(r);
    }
}
void viewList()
{
    struct node *t;
    if(START == NULL )
    {
        printf("List is empty");
    }
    else{
        t=START;
        while(t!=NULL)
        {
            printf("%d \t",t->info);
            t=t->link;
        }
    }
}


void main()
{
    int choice;


    do{
            printf("\n 1.inset value to the list");
     printf("\n 2.Delete value ");
     printf("\n 3.View list");
     printf("\n exit");
     printf("Enter your choice");
     scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            insertNode();
            break;
        case 2:
            deleteNode();
            break;
        case 3:
            viewList();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice");
        }


    }while(choice!=4);
}
