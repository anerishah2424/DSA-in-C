#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *f=NULL;
struct Node *r=NULL;
int isEmpty(struct Node* ptr){
    if(ptr==NULL){
        return 1;
    }
    return -1;
}

int isFull(struct Node* ptr){
    if(ptr==NULL){
        return 1;
    }
    return -1;
}

void enqueue(int val){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if(isFull(ptr)==1){
        printf("Queue Overflow\n");
    }
    else{
        ptr->data=val;
        ptr->next=NULL;
        if(f==NULL){
            f=r=ptr;
        }
        r->next=ptr;
        r=ptr;   
    }
}

int dequeue(){
    int val=-1;
    struct Node * n =f;
    if(isEmpty(n)==1){
        return val;
    }
    else{
        val=n->data;
        f=f->next;
        free(n);
        return val;
    }
}

void LinkedListTraversal(struct Node *ptr)
{
    int n = 0;
    do
    {
        n++;
        printf("Data of Node %d: %d\n", n, ptr->data);
        ptr = ptr->next;
    } while (ptr != NULL);
}

int main(){
    int ch =1;
    int choice;
    int value,a;
    
    while (ch==1)
    {  printf("Enter your choice:\n1.Enqueue\n2.Dequeue\n3.exit\n");
       scanf("%d",&choice);
       switch (choice)
        {
        case 1:
            printf("Enter the value to be enqueued:");
            scanf("%d",&value);
            enqueue(value);
            
            break;
        case 2:
            a =dequeue();
            if(a==-1){
                printf("No elements to dequeue\n");
                break;
            }
            printf("dequeuing element:%d\n",a);
            
            break;
        case 3:
            ch=0;
            printf("program exited successfully!\n");
            break;                
        default:
            printf("Invalid Input\n");
            break;
        }   
    }
    LinkedListTraversal(f);

    return 0;
}