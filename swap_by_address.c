#include<stdio.h>

void swap(int *a,int *b){
    int k=*a;
    *a=*b;
    *b=k;
    printf("Numbers after swapping in function:\n");
    printf("a:%d\nb:%d\n",*a,*b);

}

void main(){
    int a=10;
    int b=20;
    printf(" Before swapping in main :\na=%d\nb=%d\n",a,b);
    swap(&a,&b);
    printf("after swapping in main :\na=%d\nb=%d\n",a,b);


}