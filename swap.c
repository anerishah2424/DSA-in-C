#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("Numbers after swapping in swap:\n");
    printf("a:%d\nb:%d\n",*a,*b);
}
void main(){
    int a=11;
    int b=3;
    printf("Numbers before swapping in main:\na=%d\nb=%d\n",a,b);
    swap(&a,&b);
    printf("Numbers after swapping in main:\na=%d\nb=%d\n",a,b);
}
