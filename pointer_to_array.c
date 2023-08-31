#include<stdio.h>
void main(){

    int arr[5]={12,34,56,78,90};
    int *ptr = &arr[0];
   
    for (int i = 0; i < 5; i++)
    {
        printf("element arr[%d]:%d\n",i,*(ptr+i));
    }
}