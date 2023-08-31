#include<stdio.h>

int main(){
    
    int key;
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter arr[%d] element:", i);
        scanf("%d", &arr[i]);
    }
    
    for (int i=0;i<sizeof(arr)/4;i++){
        for(int j=i+1;j<sizeof(arr)/4;j++){
            if(arr[j]<arr[i]){
                key=arr[j];
                arr[j]=arr[i];
                arr[i]=key; 
            }
        }
    }
    printf("The Sorted array is: ");
    for(int i=0;i<sizeof(arr)/4;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}