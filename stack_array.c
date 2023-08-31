#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *s){
    if (s->top==-1){
        return 1;
    }
    else{
        return 0;
    }

}
int isfull(struct stack *s){
    if (s->top==s->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *s, int ch){
    if (!isfull(s)){
        s->top++;
        s->arr[s->top]=ch;
        }
}
int pop(struct stack *s){
    if (!isempty(s)){
       int ch=s->arr[s->top];
       s->top--;
       return ch;
    }
}
int top(struct stack *s){
    if(!isempty(s)){
        return s->arr[s->top] ;
    }
}

void main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=10;
    s->top=-1;
    s->arr=(int *)malloc(sizeof(int)*s->size);
    int choice=1;
    while(choice==1){
    printf("\n 1. push \n 2.pop \n 3.top\n");
    int ch;
    scanf("%d",&ch);
    if (ch==1){
        int sh;
        printf("enter the element you want to push ");
        scanf("%d",&sh);
        push(s,sh);}
    else if (ch==2){
        printf("popped element is %d",pop(s));
    }
    else if (ch==3){
        printf("top of elemenet is %d",top(s));
    }
    else{
        printf("invalid input");
    }
    printf("\n enter 1 to continue\n");
    scanf("%d",&choice);
    }
}
// #include <stdio.h>
// int stack[100],i,j,choice=0,n,top=-1;
// void push();
// void pop();
// void show();
// void main ()
// {printf("Enter the number of elements in the stack ");
// scanf("%d",&n);
// printf("Stack operations using array");
// printf("\n");
// while(choice != 4)
// {
// printf("Chose one from the below options...\n");
// printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
// printf("\n Enter your choice \n");
// scanf("%d",&choice);
// switch(choice)
// {
// case 1:
// {
// push();
// break;
// }
// case 2:
// {
// pop();
// break;
// }
// case 3:
// {
// show();
// break;
// }
// case 4:
// {
// printf("Exiting....");
// break;
// }
// default:
// {
// printf("Please Enter valid choice ");
// }
// };
// }
// }
// void push ()
// {
// int val;
// if (top == n )
// printf("\n Overflow");
// else
// {
// printf("Enter the value?");
// scanf("%d",&val);
// top = top +1;
// stack[top] = val;
// }
// }
// void pop ()
// {
// if(top == -1)
// printf("Underflow");
// else{
//     int s=stack[top];
//     printf("popped element is %d",s)

//     top = top -1;


// }

// }
// void show()
// {
// for (i=top;i>=0;i--)
// {
// printf("%d\n",stack[i]);
// }
// if(top == -1)
// {
// printf("Stack is empty");
// }
// }

