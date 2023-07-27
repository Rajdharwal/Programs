#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *START=NULL;
struct node* createNode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return n;

};
void insertAtFirst()
{
    struct node *first;
    first=createNode();
    printf("enter node information\n");
    scanf("%d",first->info);
    first->next=NULL;
    if(START==NULL)
    {
        START = first;

    }

}
void viewLinkedList()
{
    if(START==NULL)
    {
        printf("list is empty");

    }
    while(START!=NULL)
    {
        printf("%d",START->info);
        START=START->next;

    }
}
int main(){
int choice;
do{
        printf("1.inset\n 2.view\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            insertAtFirst();
            break;
        case 2:
            viewLinkedList();
            break;
        default:
            printf("wrong choice");
            break;
        }

}while(choice!=3);
return 0;
}
