# include <stdio.h>

int main () {
  int a;
  printf("数値を入力");
  scanf("%d",&a);

  if (a > 0){
    printf("入力した値は正");
  }
  else if (a == 0){
    printf("入力した値は0");

  }
  else {
    printf("入力した値は負の値");
  }

  return 0;
}