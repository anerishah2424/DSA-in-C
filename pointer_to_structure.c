#include <stdio.h>
#include <string.h>
struct Student {
    int roll_no;
    char name[30];
};
 
int main()
{
    struct Student *s1;
    s1->roll_no = 27;
    strcpy(s1->name, "Aneri Shah");
    
    printf("Roll Number: %d\n", s1->roll_no);
    printf("Name: %s\n",s1->name);
    return 0;
}