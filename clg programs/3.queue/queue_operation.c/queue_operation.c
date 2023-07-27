#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
int front;
int rear;
int *arr;

};



int isEmpty(struct queue *q)
{
    if(q->front== q->rear){
        return 1;
    }
}
int isFull(struct queue *q){
     if(q->rear== q->size-1){
        return 1;
     } 
     return 0;
}
void enqueue(struct queue *q,int val)
{
    if(isFull(q)){
        printf("This Queue is full");
    }
    else {
        q->rear++;
        q->arr[q->rear]=val;
    }
} 
int dqueue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This queue is full");
    }
    else{
        q->front++;
       a= q->arr[q->front];
    } 
     return a;
}


int main()

{
    struct queue q;
    q.size = 100;
    q.front=q.rear = -1;
    q.arr = (int*)malloc(q.size*sizeof(int));
    printf("Dequeuing element %d",dqueue(&q));
    //Enqueue few elements
    enqueue(&q,2);
    enqueue(&q,12);
    if(isEmpty(&q)){
        printf("Queue is empty");
    }
    if(isFull(&q)){
        printf("Queue is full");
    } 
    return 0;
}
