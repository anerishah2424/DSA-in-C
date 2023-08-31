#include<stdio.h>
#include<stdlib.h>

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter arr[%d] element:", i);
        scanf("%d", &arr[i]);
    }
    int j,key;
    for(int i=1;i<sizeof(arr)/4;i++)
    {
       key = arr[i];
       j=i-1;
       while (j>=0 && arr[j]>key)
       {
         arr[j+1]= arr[j];
         j=j-1;
       }
       arr[j+1]=key;
    }
    for(int i=0;i<sizeof(arr)/4;i++)
    {
        printf("%d ",arr[i]);
    } 
    return 0;
}