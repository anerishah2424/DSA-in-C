#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int *arr;
};

int isempty(struct queue *q){
    if(q->front==-1 && q->rear==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(struct queue *q){
    if(q->rear==(q->size-1)){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct queue *q, int item){
    if (isfull(q)){
        printf("Queue Overflow\n");
        }
    if(isempty(q)){
        q->front=0;
    }
    q->rear++;
    q->arr[q->rear]=item;

}

int dequeue(struct queue *q){
    if(isempty){
        printf("Queue Underflow\n");
    }
    int item=q->arr[q->front];
    q->front++;
    return item;
}

void main(){
    struct queue *q=(struct queue*)malloc(sizeof(struct queue));
    q->size=10;
    q->rear=-1;
    q->front=-1;
    q->arr=(int *)malloc(sizeof(int)*q->size);
    int choice=1;
    while(choice==1){
    printf("\n 1.enqueue \n 2.dequeue \n");
    int ch;
    scanf("%d",&ch);
    if (ch==1){
        int sh;
        printf("enter the element you want to push ");
        scanf("%d",&sh);
        enqueue(q,sh);}
    else if (ch==2){
        printf("popped element is %d",dequeue(q));
    }
    else{
        printf("invalid input");
    }
    printf("\n enter 1 to continue\n");
    scanf("%d",&choice);
    }
}

