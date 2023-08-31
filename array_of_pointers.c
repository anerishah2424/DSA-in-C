#include<stdio.h>
void main(){
    int n;
    printf("Enter the length of array:");
    scanf("%d",&n);
    int *arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element:");
        scanf("%d",(arr+i));
    }
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]:%d\n",i,*(arr+i));
    }
}

