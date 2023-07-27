#include<stdio.h>
#include<stdlib.h>
void Create();
void Add();
void Display();
void Insertbg();
struct list
{
    int data;
    struct list* next;

};
    struct list* first;
    struct list* last;
    struct list* newpt;

int main()
{
    int choice;
    do{
            printf("1.create\n 2.Add\n 3.display\n 4.insert\n 5.exit\n");
            printf("enter your choice\n");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
                Create();
                break;
            case 2:
                Add();
                break;
            case 3:
                Display();
                break;
            case 4:
                Insertbg();
                break;
            default:
                printf("wrong choice\n");
                break;

            }

    }while(choice != 5);
    return 0;
}

//a function for create a list in heap
void Create()
{
    first =(struct list*)malloc(sizeof(struct list));
    printf("Enter the first list information\n" );
    scanf("%d",&first->data);
    first->next = NULL;
    last = first;
    //last->next=NULL;

}
// add two nodes together
void Add()
{
    last = first;
    while(last->next != NULL)
    {
        last = last->next;

    }
    if(last->next == NULL)
    {
        newpt=(struct list*)malloc(sizeof(struct list));
        printf("Enter the node information\n");
        scanf("%d",&newpt->data);
        newpt->next=NULL;
        last->next = newpt;
       last = newpt;
    }

}
//Display linked list information
void Display()
{
    last = first;
    while(last->data != NULL);
    {
        printf("%d\t",last->data);
        last = last->next;
    }

    printf("%d \t",last->data);

}
void Insertbg()
{
    newpt=(struct list*)malloc(sizeof(struct list));
    printf("Enter the node information\n");
    scanf("%d",&newpt->data);
    newpt->next = NULL;
    last->next=first;
    first = newpt;

}


