#include <stdio.h>
int main(){
  char firstname[50];
  char familyname[50];
  int age;

  printf("What is your first name?\n");
  scanf("%s",firstname);
  printf("What is your family name?\n");
  scanf("%s",familyname);
  printf("What is your age?\n");
  scanf("%d",&age);
  printf("%s %s %d\n",firstname,familyname,age);
  
  return 0;
}
