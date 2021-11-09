#include <stdio.h>
#include <conio.h>
int main()
{
   char student[20];
    int roll_no=0;
    char course [10];
    char city[13];
    printf("\n\t enter a name(initial name only)");
    scanf("%s",& student);
    
    printf("\n\t enter a roll no");
    scanf("%d",& roll_no);
    
    printf("\n\t enter a course: ");
    scanf("%s", & course);
    
    printf("\n\t enter a city:");
    scanf("%s", & city); 
    
    printf("\t name %s \n\t roll no %d \n\t city %s", student,roll_no,course,city);
    getch();
    return 0;
    
    
    
    
 }