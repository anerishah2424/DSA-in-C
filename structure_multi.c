#include <stdio.h>
#include <string.h>
struct student
{
    char name[30];
    char RollNo[10];
    char Address[30];
};
void main()
{
    struct student S1[5];
    char name[30], roll[10], add[30];
    for (int i = 0; i < 5; i++){
        printf("Enter student%d Name:", i + 1);
        scanf("%s", &name);
        printf("Enter student%d roll no:", i + 1);
        scanf("%s", &roll);
        printf("Enter student%d address:", i + 1);
        scanf("%s", &add);
        strcpy(S1[i].name, name);
        strcpy(S1[i].RollNo, roll);
        strcpy(S1[i].Address, add);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Student%d Name:%s\n", i + 1, S1[i].name);
        printf("Student%d roll no:%s\n", i + 1, S1[i].RollNo);
        printf("student%d address:%s\n", i + 1,S1[i].Address);
    }
}


