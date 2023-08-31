#include <stdio.h>
#include <string.h>
struct student{
    char name[30];
    char RollNo[10];
    char Address[30];
};
void main(){
    struct student S1;
    strcpy(S1.name, "Aneri Shah");
    strcpy(S1.RollNo, "22BCP280");
    strcpy(S1.Address, "Gujarat");
    printf("Name:%s\n", S1.name);
    printf("Roll No:%s\n", S1.RollNo);
    printf("Address:%s", S1.Address);
}
