#include<stdio.h>
#include<stdlib.h>
void createNode();
void dispalyList();
void insertAtEnd();
void insertBegning();
void countElement();
void insertAfterGivenLocation();
void deleteBeginning();
void deleteEnd();
struct list{
int data;
struct list *next;
};
struct list *head=NULL;

struct list *newNode;
struct list *temp;
int count;
//1.createNode
void createNode(){
    newNode=(struct list *)malloc(sizeof(struct list));
    printf("Enter node info\n");
    scanf("%d",&newNode->data);
    newNode->next=NULL;

    if(head==NULL)
    {
        head=newNode;
        temp=newNode;
    }
    else{
            temp=head;
            while(temp->next !=NULL)
            {
                temp=temp->next;

            }
        temp->next=newNode;
        temp=newNode;
    }
}
//2.displayList
void dispalyList()
{
    if(head==NULL)
    {
        printf("List is Empty\n");


    }
    else
    {



     temp=head;

    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
    }
}
//3.insertBegnig
void insertBegning()
{
    newNode=(struct list *)malloc(sizeof(struct list));
    printf("Enter node data\n");
    scanf("%d",&newNode->data);
    temp=head;
    head=newNode;
    newNode->next=temp;

}
//4.insetAtEnd
void insertAtEnd()
{
    temp=head;
    while(temp->next != NULL)
    {
        temp=temp->next;

    }
    newNode=(struct list *)malloc(sizeof(struct list));
        printf("Enter node data\n");
        scanf("%d",&newNode->data);
        newNode->next=NULL;

        temp->next=newNode;


}
//5.countElement
void countElement()
{
    count=0;
    temp=head;
     while(temp != 0)
     {
         temp=temp->next;
         count++;
     }
     printf("size of linked list is:%d\n",count);

}
//6.inset after given location
void insertAfterGivenLocation()
{
    int pos;
    printf("Enter position which after you want to insert Node\n");
    scanf("%d",&pos);
    int i=1;

    temp=head;
    if(pos > count)
    {
        printf("Invalid Position\n");
    }
    else{

         while(i<pos)
         {
             temp=temp->next;
             i++;
         }
         newNode=(struct list *)malloc(sizeof(struct list));
         printf("Enter node Data\n");
         scanf("%d",&newNode->data);
         newNode->next = temp->next;
         temp->next=newNode;
    }




}
//7. Insert list data before a value OR element
void insertBeforeValue()
{
    int value;
    printf("Enter value after you want to insert node\n");
    scanf("%d",&value);
    temp=head;
    while(temp->data != value)
    {
        temp=temp->next;
    }
    if(temp->data != value)
    {
        printf("Invalid Data\n");

    }
    else
    {
        newNode=(struct list *)malloc(sizeof(struct list));
        printf("Enter node Data\n");
        scanf("%d",&newNode->data);
        newNode->next=temp->next;
        temp->next=newNode;
    }
}
//8. function to delete data in Link List from beginning
void deleteBeginning()
{
    if(head == NULL)
    {
        printf("List is Empty\n");

    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
    }



}
//9. Delete list element at End
void deleteEnd()
{
     struct list *prevNode;
     temp=head;
     while(temp->next != NULL)
     {
         prevNode=temp;
         temp=temp->next;
     }
     if(temp==head)
     {
         head=NULL;
         free(temp);
     }
     else
     {
         prevNode->next=NULL;
         free(temp);
     }

}
// 10. Delete node from position
void deleteFromPosition()
{
    struct list *nextNode; //nextNode means Target node
    int pos;
    int i=1;
    temp=head;
    printf("Enter the Position\n");
    scanf("%d",&pos);

    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextNode=temp->next;
    temp->next = nextNode->next;
    free(nextNode);


}
//11.Reverse linked list
void reverseLinkedList()
{
    struct list *prevNode,*currentNode,*nextNode;
    prevNode=NULL;
    currentNode=head;
    nextNode=head;
    while(nextNode != NULL)
    {
        nextNode=nextNode->next;
        currentNode->next=prevNode;
        prevNode=currentNode;
        currentNode=nextNode;
    }
    head=prevNode;
}


int main()
{
    int choice;
    do{
            printf("1.create\n 2.Display \n 3.Insert In begning \n 4.Insert at End\n 5.count Total no  of Element in list\n 6.Inset Node After a position\n ");
            printf("7.Insert node after any value\n");
            printf("8.Delete data from beginning\n");
            printf("9.Delete data at End\n");
            printf("10.Delete data at position\n");
            printf("11.reverse node\n");
            printf("12.exit\n");
            printf("Enter your choice\n");


            scanf("%d",&choice);
            switch(choice)
        {
             case 1:
                 createNode();
                 break;
             case 2:
                dispalyList();
                break;
             case 3:
                insertBegning ();
                break;
             case 4:
                insertAtEnd();
                break;
             case 5:
                 countElement();
                 break;
             case 6:
                insertAfterGivenLocation();
                break;
             case 7:
                insertBeforeValue();
                break;
             case 8:
                deleteBeginning();
                break;
             case 9:
                deleteEnd();
                break;
             case 10:
                deleteFromPosition();
                break;
             case 11:
                reverseLinkedList();
                break;

             default:
                printf("Wrong choice");
                break;


        }
    }while(choice!=12);
    return 0;

}
