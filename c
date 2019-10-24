#include<stdio.h>
struct student
{
  char name[20];
  int roll;
  float marks;
 }
 s[5];
 int main()
 {
    int i;
    printf("********Enter the informationod student********(s):\n");
    for(i=0;i<5;++i)
    {
    s[i].roll=i+1;
    printf("\nRoll Niumber\t%d\n",s[i].roll);
    printf("EnterName");
    scanf("%s",s[i].name);
    printf("EnterMarks:");
    scanf("%f",&s[i].marks);
    printf("\n\n");
  }
  printf("____****Displaying infornation:****____\n\n\n\t");
  for(i=0;i<5;++i)
  {
  printf("\nRoll Number:%d\n",i+1);
  printf("name: ");
  puts(s[i].name);
  printf("marks: %.1f",s[i].marks);
  printf("\n");
 }
 return 0;
 }
