#include <stdio.h>
int main(){

  char d;
  double a[1000000];
  int i;
  for(i=0;i<1000000;i++){
    a[i]=1.;
  }
  printf("Hello world!\n");
  printf("PLease press a key to exit the program.\n");
  scanf("%c", &d);
  return 0;
}
