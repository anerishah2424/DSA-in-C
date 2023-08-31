#include<stdio.h>
#include<math.h>

struct realtype { 
int left; 
int right;  
}; 

struct operations { 
float sum; 
float difference; 
float product; 
}; 

float value (struct realtype n);


int main(){
    struct realtype n1;
    struct realtype n2;

    printf("Enter number1's left side: ");
    scanf("%d", &n1.left);
    printf("Enter number1's right side: ");
    scanf("%d", &n1.right);

    printf("Enter number2's left side: ");
    scanf("%d", &n2.left);
    printf("Enter number2's right side: ");
    scanf("%d", &n2.right);

    printf("number 1 : %d.%d\n", n1.left,n1.right);
    printf("number 2 : %d.%d\n", n2.left,n2.right);

    float N1 = value(n1);
    float N2 = value(n2);


    printf("number 1 : %f\n", N1);    
    printf("number 2 : %f\n", N2);

    struct operations n1n2;
    n1n2.sum = N1 + N2;
    n1n2.difference = N1 - N2;
    n1n2.product = N1*N2;

    printf("Operations on n1 and n2 \nSum : %f\nDifference : %f\nProduct : %f", n1n2.sum,n1n2.difference,n1n2.product);
    return 0;

}

float value (struct realtype n){
    int i = 0;
    float x = (float)n.right;
    float y = (float)n.left;
    while(x>1){
        x = x/10;
    }

   
    if(n.left>=0){
        return y+x;
    }
    else if(n.left<0){
        return y-x;
    }
}